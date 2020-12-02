set terminal svg size 400, 300 enhanced fname 'arial' fsize 10 butt solid
set output out.svg

set key inside bottom right
set xlabel 'Deflection (m)'
set ylabel 'Force (kN)'
set title 'Some data'
plot "data.txt" using 1:2 title 'Col-Force' with lines, "data.txt" using 1:3 title 'Beam-Force' with linespoints
