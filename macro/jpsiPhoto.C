#include "style.C+"
#include "draw.C+"

void jpsiPhoto()
{
   //Draw Feynman diagrams
   // To see the output of this macro, click here
   //Author: Otto Schaile
   
   TCanvas *c1 = new TCanvas("c1", "A canvas", 0,0, 600, 450);
   c1->Range(0, 0, 100, 75);
   
   drawGamma(10, 70, 35, 55, 2, 1, kGreen+2);
   drawText(22, 66, "#gamma", 32, 0.07, 0, kGreen+2);
   // proton
   drawArrowLine(10, 10, 35, 20);
   drawArrowLine(10, 8, 35, 18);
   drawArrowLine(10, 12, 35, 22);
   drawText(18, 6, "P", 32, 0.08, 0, kBlack);

   drawArrowLine(42, 21, 85, 10);
   drawArrowLine(42, 19, 85, 8);
   drawArrowLine(42, 23, 85, 12);
   drawText(68, 6, "P'", 32, 0.08, 0, kBlack);

   // charm quarks
   drawArrowLine(35, 45, 35, 55, 0.03, 30, 1, 1, kBlue);
   drawText(41, 57, "c", 32, 0.06, 0, kBlue);
   drawArrowLine(35, 55, 50, 56, 0.03, 30, 1, 1, kBlue);
   drawArrowLine(50, 55, 35, 45, 0.03, 30, 1, 1, kBlue);
   drawText(44, 47, "#bar{c}", 32, 0.06, 0, kBlue);
   drawGluon(35, 24, 35, 45, 1, 1, kRed+1);
   drawGluon(40, 24, 40, 55.5, 1, 1, kRed+1);

   drawArrowLine(55, 57, 85, 66.5, 0.03, 30, 1, 1, kBlue);
   drawArrowLine(85, 65, 55, 55.5, 0.03, 30, 1, 1, kBlue);
   drawText(72, 56, "J/#psi", 32, 0.08, 0, kBlue);
   
   
   drawEllipse(38, 21, 6, 4, 0., 360., 0., 1000, 1);
   drawEllipse(52.5, 56, 2.8, 2.8, 0., 360., 0., 3005, kBlue, 1, 1, kBlue);
   
   c1->Update();
   c1->SaveAs("fig/Feynman_jpsiPhoto.pdf");
   c1->SaveAs("fig/Feynman_jpsiPhoto.png");
   
}
