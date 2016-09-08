#include <stdio.h>
#include <stdlib.h>


struct myData
{
    char Model[10];
    double  decimalNum;
    int  number;
    char color[10];

};


int j=1;

const int DATA_SIZE = 100;

int choice=33;


/*Function declaration*/
int sort(struct myData info[]);


/*Open file*/
int fileprocessing(struct myData info[]);



int main()
{
    struct myData info[DATA_SIZE];

    fileprocessing(info);
    do
    {
        printf("\t\t\tMenu\n");
        printf("1. Sort data by the int value & print high to low\n");
        printf("2. Sort data by the int value & print low to high\n");
        printf("3. Sort data by the float value & print high to low\n");
        printf("4. Sort data by the float value & print low to high\n");
        printf("5. Exit\n");
        scanf("%d", &choice);



        if(choice==1)
        {
            sort(info);
        }
        else if (choice==2)
        {
            sort(info);
        }
        else if (choice==3)
        {
            sort(info);

        }
        else if(choice==4)
        {
            sort(info);

        }
        else if (choice==5)
        {
            printf("\nYou choose to exit \n");
            break;
        }
        else
        {
            printf("\nWrong choice. Try again\n");
        }



    }while  (choice != 5);

    return 0;

}

int fileprocessing(struct myData info[])
{
    int g=0;

    FILE *data;

    data = fopen("hw2.data", "r");

    if (data == NULL) {
        perror("\nError in opening file");
        printf("\n");
        return (-1);
    }; // file  not opened


    while ((g = (fgetc(data))) != EOF)
    {
        fscanf(data, "%s %lf %d %s", info[j].Model, &info[j].decimalNum, &info[j].number, info[j].color);
        j++;
    }


    fclose(data);

    return 0;

}


int sort(struct myData info[])
{

    if(choice==1)
    {
        /*Sort data by the int value, print high to low*/

        int n;
        n=j;
        int j,i;

        for(i=1;i<n;i++)
        {
            for (j = 0; j < n - i; j++)
            {
                if (info[j].number > info[j + 1].number)
                {
                    struct myData temp = info[j];
                    info[j] = info[j + 1];
                    info[j + 1] = temp;
                }
            }
        }

        int ff=n-1;

        printf("Sort data by the int value & print high to low:\n\n");
        while(ff != 1)
        {
            printf("%s %.2lf %d %s\n", info[ff].Model, info[ff].decimalNum, info[ff].number, info[ff].color);
            ff--;
        }

    }
    else if (choice==2)
    {
        /*Sort data by the int Value & print low to high*/
        int n;
        n=j;
        int j,i;

        for(i=1;i<n;i++)
        {
            for (j = 0; j < n - i; j++)
            {
                if (info[j].number > info[j + 1].number)
                {
                    struct myData temp = info[j];
                    info[j] = info[j + 1];
                    info[j + 1] = temp;
                }
            }
        }



        int ii;
        printf("Print low to high, sorted by int value:\n\n");
        for (ii=+2; ii<n ; ii++)
        {
            printf("%s %.2lf %d %s\n", info[ii].Model, info[ii].decimalNum, info[ii].number, info[ii].color);
        }


    }
    else if (choice==3)
    {
        /*Sort data by the float value & print high to low*/
        int n;
        n=j;
        int j,i;

        for(i=1;i<n;i++)
        {
            for (j = 0; j < n - i; j++)
            {
                if (info[j].decimalNum > info[j + 1].decimalNum)
                {
                    struct myData temp = info[j];
                    info[j] = info[j + 1];
                    info[j + 1] = temp;
                }
            }
        }


        int ff=n-1;

        printf("Print low to high, sorted by double value::\n\n");
        while(ff !=1)
        {
            printf("%s %.2lf %d %s\n", info[ff].Model, info[ff].decimalNum, info[ff].number, info[ff].color);

            ff--;
        }
    }
    else if(choice==4)
    {
        /*Sort data by the float Value & print low to high*/
        int n;
        n=j;
        int j,i;

        for(i=1;i<n;i++)
        {
            for (j = 0; j < n - i; j++)
            {
                if (info[j].decimalNum > info[j + 1].decimalNum)
                {
                    struct myData temp = info[j];
                    info[j] = info[j + 1];
                    info[j + 1] = temp;
                }
            }
        }


        int ii;
        printf("Print low to high, sorted by double value:\n\n");

        for (ii=+2; ii<n; ii++)
        {
            printf("%s %.2lf %d %s\n", info[ii].Model, info[ii].decimalNum, info[ii].number, info[ii].color);
        }

    }
    else
    {
        printf("SHOULD NEVER GET HERE");
    }

    return 0;
}

