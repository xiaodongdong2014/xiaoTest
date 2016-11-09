#include <iostream> 

   unsigned maxnum=0;
    
   int main(){
       unsigned blocksize[]={1024*1024,1024,1};
       int i,count;
       for(i=0;i<3;i++){
          for(count=1;;count++){
              void * block=malloc(maxnum+blocksize[i]*count);
              if(block)
                      maxnum=maxnum+blocksize[i]*count;
              else
                      break;
          }
      }
    
      printf("maxnum malloc size is : %u GB\n",maxnum/(1024*1024*1024));
      return 0;
  }

