# RMB0AZ
## Klade <br/>
**uname** - parāda OS nosaukumu<br/>
**uname -a** - parāda pilno OS nosaukumu<br/>
**echo $0** - parāda atrašanās vietas adresi<br/>
**whoami** - parāda lietotāja vārdu<br/>
**who** - informācija par lietotāju<br/>
**man** - ar komandu aiz tā parāda komandas skaidrojumu<br/>
**history** - parāda iepriekš lietotās komandas<br/>
**sh** - izslēdz shell<br/>
**pwd** - parāda adresi<br/>
**ls** - parāda adrešu sarakstu<br/>
**ls -l** - parāda plašāku adrešu sarakstu<br/>
**history** - parāda komandu vēsturi<br/>
**~** - home/user apgabals
**cd ..** - atpakaļ
**mkdir** - make directory
**rmdir** - remove directory
**touch** - uztaisa tukšu failu
**cat (faila nosaukums)** - nolasa faila saturu
**echo (teksts) > (faila nosaukums)** - izveido failu ar doto tekstu
**hexdump -C (faila nosaukums)** - izdrukā faila simbolus hex sistēmā
**echo (teksts) >> (faila nosaukums)** - pievieno failam tekstu
**0a** - komandas pārcelšanas simbols
**nano** - atver nano
**rm (fails)** - dzēst failu
**rm (*pirmie divi simboli no saknes*)** - dzēš visus failus ar šo saknes sākumu
**cp** - kopēt failu
**mv** - pārcelt failu
**tree** - parāda dir tree
**chomd** - maina rights failam
    3  uname
    4  uname -a
    5  ls -l
    6  ls Desktop/
    7  ls
    8  ls -l Desktop/
    9  echo 
   10  echo -$
   11  echo $
   12  echo $0
   13  whoami
   14  pwd
   15  ls -l
   16  ls -a
   17  ls -a -l
   18  pwd
   19  cd .
   20  cd ..
   21  pwd
   22  whoami
   23  pwd
   24  cd .
   25  cd ..
   26  pwd
   27  ls
   28  ls -l
   29  ls -la
   30  cs ..
   31  cd ..
   32  cd `
cd ~
cd `
   33  cd home/user
   34  cd /home/user
   35  whoami
   36  pwd
   37  cd /
   38  cd
   39  pwd
   40  tree
   41  mkdir ABC
   42  ls -lt
   43  cd ABC
   44  ls
   45  ls -la
   46  cd Documents
   47  cd /Documents
   48  cd ./Documents
   49  cd
   50  cd Documents/
   51  cd
   52  rmdir ABC/
   53  touch a.txt
   54  ls -lt
   55  echo hjakfh
   56  echo 12345
   57  echo 12345 > b.txt
   58  ls -lt
   59  cat b.txt
   60  hexdump -C b.txt
   61  echo 67890 > b.txt
   62  ls -lt
   63  cat b.txt
   64  echo abcde  >> b.txt 
   65  hexdump -C b.txt
   66  cat b.txt
   67  nano
   68  ls -lt
   69  cat d.txt
   70  hexdump -C d.txt
   71  mv d.txt d.text
   72  touch c.txt
   73  ls -lt
   74  rm a.txt
   75  ls -lt
   76  rm *.tx*
   77  ls -lt
   78  cd Downloads/
   79  cp ../d.text ../Desktop/
   80  cs..
   81  cd ..
   82  cd Downloads/
   83  ls -l ../
   84  ls -l ../Desktop
   85  ls -l ../Pictures/
   86  mc ~/Pictures/dd.text ~/ddd.text
   87  cd ~
   88  ls -lt
   89  mv ~/Pictures/dd.text ~/ddd.text
   90  ls -lt
   91  ls
   92  whereis ls
   93  ls -l /bin/ls
   94  cat /bin/ls
   95  echo $PATH
   96  nano my_first_shell_script.sh
   97  who
   98  ls
   99  ./my_first_shell_script.sh
  100  chmod my_first_shell_script.sh
  101  chmod 744 my_first_shell_script.sh
  102  ls -lt
  103  whereis my_first_shell_script.sh
  104  ./my_first_shell_script.sh 
  105  nano my_first_shell_script.sh 
  106  ls
  107  puff
  108  PATH=$PATH:~
  109  echo $PATH
  110  pwd
  111  my_first_shell_script.sh 
  112  nano my_first_shell_script.sh 
  113  sudo my_first_shell_script.sh 
  114  cd ..
  115  ~/my_first_shell
