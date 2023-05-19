# Software Design

The program on the microcontroller sends digital signals to the DAC. The digital signals are generated based on vectors data defined in the library.


## Library

The library contains multiple sets of array groups. Each array group represents an image.

Before inserting any data into the library, we need to first draw out the image on a grid. 
Since each voltage divider takes in 4 inputs, we can only represent 16 different values with 4-bit. The image must fit in a 16 X 16 grid. To force sequential connections, the starting point would also be the ending point. In other words, the image must be drawn using only one stroke.

Next, lable coordinates at all angles. Since each edge has a starting point, ending point, and direction, it is natural to represent the edges using vectors. Each array group has three arrays, one for the X coordinates, one for the Y coordinates, and one for directions. The X array and Y array has the same length which is the number of edges minus 1. The length of the direction array equals to the number of edges.


Here we use the letter "T" as an example, the same technique could be applied to any image.

Here is the grid diagram for "T":
![T](https://github.com/PaggieZ/EE-Emerge-2023-OscilloscopeFun/blob/main/pictures/T.png?raw=true)

Starting from the black dot (7, 2), the vector goes up and hits (7, 12). Then it goes to the left and hits (3, 12). Then it goes up and hits (3, 14). ... Until it hits (9, 2) and goes to the left back to (7, 2). The three arrays are:

T_x[] = {7, 7, 3, 3, 13, 13, 9, 9, 7}
T_y[] = {2, 12, 12, 14, 14, 12, 12, 2, 2}
T_direction[] = {UP, LEFT, UP, RIGHT, DOWN, LEFT, DOWN, LEFT}

## Program



![flowchart](https://github.com/PaggieZ/EE-Emerge-2023-OscilloscopeFun/blob/main/pictures/flowchart.png?raw=true)