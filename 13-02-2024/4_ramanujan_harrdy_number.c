#include <stdio.h>

/*
args = array , integer n jiski occurence dekhni hai, integer no jitne elements array me hain
returns = number of occurences
function = iterate throughs the array and counts number of occurences through if condition
*/
int occurences(int list[],int n, int no){
    int c = 0;
    for(int i=0; i<no; i++){
        if(list[i] == n){
            c++;
        }
    }
    return c;
}
/*
args = array, integer size which is size of array
returns = nothing but it sorts the arrqy
function = bubble sorting
*/
void bubbleSort(int list[], int size){
    // flag ; 1=false and 0 is true 
    int flag = 1;
    // first for loop which runs from 0 to size-2 because we need to do j+1 later
    for(int i=0; i<size-1; i++){
        flag = 1;
        // second loop running from 0 to size-i-1
        /*
        lets say array is of 7 elements (index 0-6)
        i runs from 0 to 5 index 
        j runs from 0 to 6-1-0 = 5 which means all indices since j is compared to j+1
        */
        for(int j=0; j<size-i-1;j++){
            if(list[j]>list[j+1]){
                // we still use 2 variable swapping only instead of 3 (temp)
                list[j] = list[j] + list[j+1];
                list[j+1] = list[j] - list[j+1];
                list[j] = list[j] - list[j+1];
                flag = 0;
            }
        }
        if(flag==1){
            break;
        }
        
    }
}

int main(void){
    /*
    PART 1 : 
    taking user input
    */
    // int num is user input 
    int num;
    scanf("%d", &num);

    /*
    PART 2 :
    checking whether num is more than 17 or not
    */
    if(num>1 && num<=17){
        // we make a very large array to store the cubes 
        int arr[5000];
        // count is the number of elements stored in the array
        int count = 0;

        /*
        PART 3 :
        we run 2 loops i and j 
        i from 1 to 100 (constraint given in question)
        j from 1 to i (to reduce redundancy as 74 + 75 = 75 + 74)

        if the addition of i^3 + j^3 > 1729 then only it gets added to the cubes array
        (also a constraint given in question)
        count is also incremented then only

        at the end of the loop we have cubes of many numbers and a count of how many we have
        */
        for(int i=1; i<=100; i++){
            for(int j=1; j<=i; j++){
                int x = i*i*i + j*j*j;
                if(x>1729 && i+j<=100){
                    arr[count] = x;
                    count++;
                }
            }
        }

        // this is the count of Ramanujan-Harrdy number
        int rhnos = 0;
        // list for storing the same
        int rhno[100];

        /*t) then only we add it 
        to our rhno list 
        this also checks if it is not equal to or greater than 3 (constraint given in question) 
        
        we also don't add the duplicate ones by using another occurence in nested if

        at the end we get a list with the ramanujan-harrdy numbers and the count of them
        */
        for(int i=0; i<count; i++){
            if(occurences(arr, arr[i], count)==2){
                    if(occurences(rhno, arr[i], rhnos)==0){
                        rhno[rhnos] = arr[i];
                        rhnos++;
                    }
                }
            }
        
        /*
        PART 5 :
        we need to sort the numbers 
        numbers are added in the order they are being i^3+j^3-ed
        they are not added in an ascending way
        for example
        46683 comes before 39312 if we take a look at rhno array
        so we sort first before printing or swapping them
        */
        // we use bubble sort since that is in our syllabus
        bubbleSort(rhno, rhnos);
        
        // this is the array which we will output
        int final[num];

        /*
        PART 6 : 
        we save the amount of numbers given by user to the final list
        */
        for(int i=0; i<num; i++){
            final[i] = rhno[i];
        }

        // floor num variable for num/2 (final constraint)
        // int operator automatically works for odd number floor division
        int floor_num = num/2;

        /*
        PART 7 :
        we swap the numbers according to constraint given in question
        swapping takes place without a temp variable by the following algorithm
        x = x + y  
        y = x - y (= x+y -y = x)
        x = x - y (= x+y - x= y)
        thus numbers are swapped
        */
        final[0] = final[0] + final[floor_num];
        final[floor_num] = final[0] -  final[floor_num];
        final[0] = final[0] - final[floor_num];

        /*
        PART 8 :
        printing the result
        */
        for(int i=0; i<num;i++){
            printf("%d ", final[i]);
        }
    }
    else if(num == 1){
        printf("4104");
    }
    
    return 0;
}

// code by b23mt1030
