#include<stdio.h>
#include<string.h>
#include <stdbool.h>
typedef struct att{
    char name[100];
    int number;
    char department[100];
}att;
int main(){
    int flag=0;
    FILE *fp;
    fp=fopen("input.txt","w");
    int n,i,roll,j;
    char sname[100],dep[50];
    printf("no .of students:");
    scanf("%d",&n);
    printf("enter \n Studentname Studentrollno Department\n");
    for(i=0;i<n;i++){
        scanf("%s %d %s",sname,&roll,dep);
        fprintf(fp,"%s %d %s\n",sname,roll,dep);
    }
    fclose(fp);
    att students[n];
    fp=fopen("input.txt","r");
    for(i=0;i<n;i++){
        fscanf(fp,"%s %d %s",students[i].name,&students[i].number,students[i].department);
    }
    fclose(fp);
    printf("1.Bubble Sort\n2.Binary search\n3.Exit\n");
    int choice;
    scanf("%d",&choice);
    while (true)
    {
        if(choice==1){
            flag=1;
            for(i=0;i<n-1;i++){
                for(j=0;j<n-i-1;j++){
                    if(strcmp(students[j].name,students[j+1].name)>0){
                        att p;
                        p=students[j];
                        students[j]=students[j+1];
                        students[j+1]=p;
                    }
                    if(strcmp(students[j].name,students[j+1].name)==0){
                        if(students[j].number>students[j+1].number){
                            att p;
                            p=students[j];
                            students[j]=students[j+1];
                            students[j+1]=p; 
                        }
                    }
                }
            }
            for(i=0;i<n;i++){
                printf("name:%s\n",students[i].name);
                printf("roll.no:%d\n",students[i].number);
                printf("department:%s\n",students[i].department);
            }

        }
        else if(choice==2 & flag==0){
            printf("without sorting  binary search cannot be done:");
        }
        else if(choice==2){
            char find[100];
            printf("search student name:");
            scanf("%s",find);
            int low=0;
            int high=n;
            int got=0;
            int mid;
            while(strcmp(students[low].name,students[high].name)>0 || strcmp(students[low].name,students[high].name)==0 ){
                mid=low+(high-low)/2;
                if(strcmp(find,students[mid].name)==0){
                    got=1;
                    printf("name:%s\n",students[mid].name);
                    printf("roll.no:%d\n",students[mid].number);
                    printf("department:%s\n",students[mid].department);
                    break;
                }
                else if(strcmp(find,students[mid].name)>0){
                    low=mid+1;
                }
                else if(strcmp(find,students[mid].name)<0){
                    high=mid-1;
                }
            }
            if(got==0){
                printf("record not found");
            }
        }
        else if(choice==3){
            break;
        }
        printf("\n choice:");
        scanf("%d",&choice);
    }  
}     

