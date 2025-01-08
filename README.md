<p>using terminal to commit cpp file</p>
<li>nano date.cpp</li>
<li>g++ -o date date.cpp</li>
<li>./date</li>
<li>git add .</li>
<li>git commit -m "date"</li>
<li>git push</li>
<br>
<p>with objects</p>
<li>compile cpp files to object files</li>
<li>g++ -c date.cpp -o date.o</li>
<li>g++ -c date_util1.cpp -o date_util1.o</li>
<li>g++ -c date_util2.cpp -o date_util2.o</li>
<li>g++ date.o date_util1.o date_util2.o</li>
