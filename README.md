<p>make a new directory and store files</p>
<li>mkdir date_folder</li>
<li>cd date_folder</li>
<br>
<p>using terminal to create, build, and git commit cpp file</p>
<li>mac: nano date.cpp</li>
<li>windows: notepad date.cpp</li>
<li>g++ -o date date.cpp</li>
<li>./date</li>
<li>git add -A</li>
<li>git commit -m "date"</li>
<li>git push</li>
<br>
<p>build & compile cpp files to object files with objects</p>
<li>g++ -c date.cpp -o date.o</li>
<li>g++ -c date_util1.cpp -o date_util1.o</li>
<li>g++ -c date_util2.cpp -o date_util2.o</li>
<li>g++ -o date date.o date_util1.o date_util2.o</li>
