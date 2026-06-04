#include <iostream>

int main() {

    setlocale (LC_ALL, "1251");
    
    int arr[3][6] = {
        {2, 3, 1, 4, 5, 8},   
        {6, 7, 9, 11, 10, 12}, 
        {13, 14, 15, 16, 17, 18} 
    };
    
    
    std::cout << "Массив:" << std::endl;
    for (int i = 0; i < 3; i++) {          
        for (int j = 0; j < 6; j++) {      
            std::cout << arr[i][j] << "\t"; 
        }
        std::cout << std::endl; 
    }
    
    
    int min = arr[0][0];
    int max = arr[0][0];
    
   
    int min_i = 0, min_j = 0;  
    int max_i = 0, max_j = 0;  
    
  
    for (int i = 0; i < 3; i++) {          
        for (int j = 0; j < 6; j++) {      
            if (arr[i][j] < min) {         
                min = arr[i][j];            
                min_i = i;                                      
                min_j = j;                 
            }
            if (arr[i][j] > max) {         
                max = arr[i][j];           
                max_i = i;                 
                max_j = j;                 
            }
        }
    }
    
   
    std::cout << "Индекс минимального элемента: " << min_i << " " << min_j << std::endl;
    std::cout << "Индекс максимального элемента: " << max_i << " " << max_j << std::endl;
    
    return 0;
}