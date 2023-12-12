#include <stdio.h>
#include <math.h>

int main(){
   int A;
	printf("Nhap so nguyen thu nhat:");
	scanf("%d",&A);

	int B;
	printf("Nhap so nguyen thu hai:");
	scanf("%d",&B);

	int C;
	printf("Nhap so nguyen thu ba:");
	scanf("%d",&C);
	
	int p;
	int cv;
	int s;           
	
	if (A+B>C){
		//yes
		//kiem tra dieu kien tiep theo
		if(A+C>B){
			//yes
			//kiem tra dieu kien cuoi cung
			if(C+B>A){
				//yes
				p= (A + B + C)/2;
         	  	
         	    cv= p*2;
        
         	  	s = sqrt(p*(p-A)*(p-B)*(p-C));
         	  	
         	  	printf("Chu vi = %d\n",cv);
         	  	printf("nua chu vi = %d\n",p);
         	  	printf("Dien tich = %f",s);
				
			}else{
				//no
				printf("dieu kien Khong hop le");
			}
		}else{
			//no
			printf("dieu kien khong hop le");
		}
		
		
	}else{
		//no
		printf("dieu kienkhong hop le");
	}
	
	
			
	


         	   
         	
         	  	
         	
         	  	
         	  	
         	  	
         	  	
         	
            

            
            
               
	                   
	
	
    
    }

