/**
 *alloc_grid- returns a poimter to a 2-dimensional array of integers
 *@width: width of the grid
 *@height: height of the grid
 *Return: pointer to array(success), NULL(fail)
 */

#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{

int *ptr_wid;
int *ptr_hei;
int i;
int j;
int **ptr_holder[2];

ptr_holder[0] = &ptr_wid;
ptr_holder[1] = &ptr_hei;
if (width < 0 || width == 0)
return (NULL);
if (height < 0 || height == 0)
return (NULL);

while (width != 0)
ptr_wid = malloc(sizeof(int) * (width));

if (ptr_wid == NULL)
return (NULL);

else
for (i = 0; i < width; i++)
ptr_wid[i] = 0;


while (height != 0)
ptr_hei = malloc(sizeof(int) * height);

if (ptr_hei == NULL)
return (NULL);

else
for (j = 0; j < height; j++)
ptr_hei[j] = 0;

return (*ptr_holder);
}
