# Software Design

The program on the microcontroller controls the value and frequency of the digital signal. The value determines the shape of the image. the frequency determines the duration and consistency of the image.

## Image Library

The "Global.h" library contains multiple sets of array groups. Each array group represents an image.

Each array group is constructed using the following steps:
1. Draw out the image on a 16 x 16 grid. The starting point must match with the ending point.
2. Record the XY coordinates of the corners.
3. Record the directions of the edges.

Here we use the letter "T" as an example, the same technique could be applied to any image.

Here is the grid diagram for "T":
![T](https://github.com/PaggieZ/EE-Emerge-2023-OscilloscopeFun/blob/main/pictures/T.png?raw=true)

Starting from the black dot (7, 2), the vector goes up and hits (7, 12). Then it goes to the left and hits (3, 12). Then it goes up and hits (3, 14). ... Until it hits (9, 2) and goes back to (7, 2). 

The three arrays are:

T_x[] = {7, 7, 3, 3, 13, 13, 9, 9, 7}

T_y[] = {2, 12, 12, 14, 14, 12, 12, 2, 2}

T_direction[] = {UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, LEFT}

## Program

![flowchart](https://github.com/PaggieZ/EE-Emerge-2023-OscilloscopeFun/blob/main/pictures/flowchart.png?raw=true)