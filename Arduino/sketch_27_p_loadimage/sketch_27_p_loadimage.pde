void setup(){
 PImage img = loadImage("r.jpg");
 size(img.width, img.height);
 background(img);
}

void draw(){
}

void mouseDragged(){
  color c = get(mouseX,mouseY);
  println("RED: "+red(c)+", Green : "+green(c)+", Blue : "+blue(c));
}
