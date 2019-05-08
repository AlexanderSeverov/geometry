#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdio>

int test()
{
    bool check=false;

    int om=80,om1=90,om2=300;

    int plos=3.14*(80*80),perim=2*3.14*80;

    if (plos==20096)
        check=true;

    if (perim==502)
        check=true;

        int maxp1=0,max1p1=0, maxp11=0,max1p11=0, maxp2=0,max1p2=0, maxp22=0,max1p22=0;
        bool flag1,flag2,flag3,flag4;

        maxp1=om1+om;
        max1p1=om1+om;

        maxp11=om1-om;
        max1p11=om1-om;


        maxp2=om2+om;
        max1p2=om2+om;

        maxp22=om2-om;
        max1p22=om2-om;


        if(maxp1>maxp22)
        {
            flag1=true;
        }
        else
        {
            flag1=false;
        }

        if(maxp11>maxp2)
        {
            flag2=true;
        }
        else
        {

            flag2=false;
        }

        if(max1p1>max1p22)
        {
       flag3=true;
        }
        else
        {

         flag3=false;
        }

        if(max1p11>max1p2)
        {
       flag4=true;
        }
        else
        {

         flag4=false;
        }

    if(flag1==true||flag2==true||flag3==true||flag4==true)
    {
     check=false;
    }
    else
    {
    check=true;
    }

return check;
}
int main()
{
   /* // Create the main window
    sf::RenderWindow app(sf::VideoMode(800, 600), "SFML window");

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("src/cb.bmp"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);*/
    int mb=0,rad=0,p1os=0,p2os=0,var=0;
    int rad1=0,p1os1=0,p2os1=0;
  //  bool ch=false;


    //test1

    if(test()==true)
    {
    std::cout<< "\n";
    std::cout<< "test complete";
    std::cout<< "\n";
    }
    else
    {
    std::cout<< "\n";
    std::cout<< "test falied";
    std::cout<< "\n";
    exit(0);
    }

    std::cout<< "chose the varient";
    std::cin>> mb;

    if(mb==1)
    {
    std::cout<< "radius";
    std::cin>> rad;
    std::cout<< "pos x";
    std::cin>> p1os;
    std::cout<< "pos y";
    std::cin>> p2os;

    std::cout<< "one more figure";
    std::cout<< "\n";

    std::cout<< "radius";
    std::cin>> rad1;
    std::cout<< "pos x";
    std::cin>> p1os1;
    std::cout<< "pos y";
    std::cin>> p2os1;
    var=1;
    }



	if (var==1)
	{// Start the game loop
	int b=0;
  //  app.clear();

   /*     // Draw the sprite
       app.draw(sprite);

        // Update the window

          // app.clear();
        sf::CircleShape shape(50);
        shape.setPosition(p1os,p2os);
        shape.setRadius(rad);
// set the shape color to green
        shape.setFillColor(sf::Color(100, 250, 50));

        app.draw(shape);

        app.display();



        sf::CircleShape shape1(50);
        shape1.setPosition(p1os1,p2os1);
        shape1.setRadius(rad1);
// set the shape color to green
        shape1.setFillColor(sf::Color(100, 250, 50));

        app.draw(shape1);

        app.display();
 //   while (1!=0)
    {

        // Process events
	sf::Event event;
      while (app.pollEvent(event))
       {
            // Close window : exit
           if (event.type == sf::Event::Closed)
               app.close();
       }

        // Clear screen
        app.clear();

        // Draw the sprite
       app.draw(sprite);

        // Update the window

          // app.clear();
        sf::CircleShape shape(50);
        shape.setPosition(p1os,p2os);
        shape.setRadius(rad);
// set the shape color to green
        shape.setFillColor(sf::Color(100, 250, 50));

        app.draw(shape);

        app.display();



        sf::CircleShape shape1(50);
        shape1.setPosition(p1os1,p2os1);
        shape1.setRadius(rad1);
// set the shape color to green
        shape1.setFillColor(sf::Color(100, 250, 50));

        app.draw(shape1);

        app.display();

      //  ch=true;
        b++;
       // if (b==2)
       // {
       // break;
      //  }

    }*/
     int maxp1=0,max1p1=0, maxp11=0,max1p11=0, maxp2=0,max1p2=0, maxp22=0,max1p22=0;
        bool flag1,flag2,flag3,flag4;

        maxp1=p1os+rad;
        max1p1=p2os+rad;

        maxp11=p1os-rad;
        max1p11=p2os-rad;


        maxp2=p1os1+rad1;
        max1p2=p2os1+rad;

        maxp22=p1os1-rad1;
        max1p22=p2os1-rad;


        if(maxp1>maxp22)
        {
            flag1=true;
        }
        else
        {
            flag1=false;
        }

        if(maxp11>maxp2)
        {
            flag2=true;
        }
        else
        {

            flag2=false;
        }

        if(max1p1>max1p22)
        {
       flag3=true;
        }
        else
        {

         flag3=false;
        }

        if(max1p11>max1p2)
        {
       flag4=true;
        }
        else
        {

         flag4=false;
        }


    int plos=3.14*(rad*rad),perim=2*3.14*rad;
    std::cout<< plos;
    std::cout<< "\n";
    std::cout<< perim;
    if(flag1==true||flag2==true||flag3==true||flag4==true)
    {
     std::cout<<"\n";
    std::cout<<"peresikaitsi";
    }
    std::cin>>b;
    system("PAUSE");
}

}

  //  return EXIT_SUCCESS;

