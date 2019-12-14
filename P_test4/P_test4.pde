import processing.serial.*;
import processing.sound.*;

Serial myPort;
String val;
float background_color;

SoundFile file1;
SoundFile file2;
SoundFile file3;
SoundFile file4;
SoundFile file5;
SoundFile file6;

float L;

void preload(){
  
}

void setup()
{
  size(200,200);
  background(#42c5f5);
  String portName = Serial.list()[1];
  myPort = new Serial(this,portName,9600);
  file1 = new SoundFile(this,"Bass2.wav");
  file2 = new SoundFile(this,"Clap2.wav");
  file3 = new SoundFile(this,"Closed2.wav");
  file4 = new SoundFile(this,"Kick2.wav");
  file5 = new SoundFile(this,"Percussion2.wav");
  file6 = new SoundFile(this,"Synth2.wav");
  
}

void draw()
{
  if (myPort.available()>0)
  {
   
    val = myPort.readStringUntil(' ');
    
    println(val);
    if (val == null){
     println("null");
  }
  else {
    

    if (val.equals("Broken1 ")){
      println("Someone1");
      file1.play();
      file1.amp(1);
      //file2.stop();
      L = file1.duration(); // check the music lengh
    }
     
    else if(val.equals("Broken2 ")){
      println("Someone2");
      file2.play();
      file2.amp(1);
      //file3.stop();
      L = file2.duration(); // check the music lengh
    }
    
    else if(val.equals("Broken3 ")){
        println("Someone3");
        file3.play();
        file3.amp(1);
         //file1.stop();
        L = file3.duration(); // check the music lengh
    
    }
    
    else if(val.equals("Broken4 ")){
        println("Someone4");
        file4.play();
        file4.amp(1);
         //file1.stop();
        L = file4.duration(); // check the music lengh
    
    }
    
    else if(val.equals("Broken5 ")){
        println("Someone5");
        file5.play();
        file5.amp(1);
         //file1.stop();
        L = file5.duration(); // check the music lengh
    
    }
    
   else if(val.equals("Broken6 ")){
        println("Someone6");
        file6.play();
        file6.amp(1);
         //file1.stop();
        L = file6.duration(); // check the music lengh
    
    }
  }
  
  } 
}
