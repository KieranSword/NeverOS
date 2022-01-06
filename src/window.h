// Header for creating windows
#define border "#"
void create_window(int x, int y, int width, int height, char title[128]){
	int r, c;
    for (r = 1; r <= width; r++)
    {
        for (c = 1; c <= height; c++)
        {
            if (c == 1 || c == width ||
                r == 1 || r == height){
                printf("%s",border);  
			}
            else{
                printf(" ");
        	}
		}
        printf("\n");
    }
}
