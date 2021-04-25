## Domain Coloring In C
A simple program to Draw a plot for any single variable function over Complex vector space.
### Usage
first, edit the EXP and z according to your desired plot, then:

```
gcc -lm -O3 -Wall new.c -O plotter
./plotter > plot.ppm
```

then, you can use GIMP to view the plot. other programms generally dislike the ppm output.
ppm is not an efficient file compression method, so you can use gimp to export the plot as PNG.
### Example
Complex logarithm
![clog(z)](https://github.com/mmjafari/DomainColoring/blob/master/logOverC.png?raw=true)

### TODO
- [] create a automation shell script
