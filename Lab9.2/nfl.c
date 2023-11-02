#include <stdio.h>

int isDup(int path[],int combs[][5],int numPaths){ //function checks for duplicates
    for(int i=0; i<numPaths;i++)
    {// loops through all combination paths 
    int dup=1;
        for(int j=0; j<5 ; j++){
            if(path[j] != combs[i][j])
            {
                dup=0; //says it isnt a dup
                
            }
        }
        if(dup)
        {
            return 1; // returns if dup is true 
        }
    }
   
    
        return 0; //returns that there isnt a dup
    
    }




void rec_footballer(int score, int path[],int combs[][5], int *numPaths) //All paths keeps track of all paths to prevent duplicates and num paths is a pointer to the variable to keep track of all combinations to scale the allPAths array
{
    if (score==0)
    {
        if(!(isDup(path,combs,*numPaths)))//checks dups
        {
            
            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",path[0],path[1],path[2],path[3],path[4]);// prints path
            for(int i = 0; i<5; i++){
                combs[*numPaths][i] = path[i]; //adds path
            } 
            (*numPaths)++;//increment the numbers
            

        } 
        

    }
    //goes through all combinations  and will recursively put them in the path array
    if (score>=2)
    {
        path[4]++;//increments in path
        rec_footballer(score-2,path,combs,numPaths);//rec call
        path[4]--;//undo increment
    }
    if (score>=3)
    {
        path[3]++;//increments in path
        rec_footballer(score-3,path,combs,numPaths);//rec call
        path[3]--;//undo increment
    }
    if (score>=6)
    {
        path[2]++;//increments in path
        rec_footballer(score-6,path,combs,numPaths);//rec call
        path[2]--;//undo increment
    }
     if (score>=7)
    {
        path[1]++;//increments in path
        rec_footballer(score-7,path,combs,numPaths);//rec call
        path[1]--;//undo increment
    }
    if (score>=8)
    {
        path[0]++;//increments in path
        rec_footballer(score-8,path,combs,numPaths);//rec call
        path[0]--;//undo increment
    }
    
   
    
    
}




int main(int argc, char const *argv[])
{
    int combs[1000][5]; // array to store combination
    int numPaths = 0;
    int path[5]={0,0,0,0,0}; // path for scoring 0 for 8pts 1 for 7pts 2 for 6pt 3 for 3 pts 4 for 2pts 
    int score=0;
   do
   {
    //gets input 
    printf("Press 0 or 1 to quit\n");
    printf("Please input NFL score:");
    scanf("%d",&score);//gets variable
    printf("\n\n");   //creates space 
    rec_footballer(score,path,combs,&numPaths);//calls function

    


    

   } while(score!=1 && score!=0);
   
    return 0;
}





