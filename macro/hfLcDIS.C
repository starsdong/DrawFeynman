#include "style.C+"
#include "draw.C+"

void hfLcDIS()
{
   //Draw Feynman diagrams
   // To see the output of this macro, click here
   //Author: Otto Schaile
   
   TCanvas *c1 = new TCanvas("c1", "A canvas", 0,0, 600, 450);
   c1->Range(0, 0, 100, 75);

   drawArrowLine(10, 65, 35, 60);
   drawText(18, 65, "e", 32, 0.07, 0, kBlack);
   drawArrowLine(35, 60, 80, 70);
   drawText(48, 65, "e'", 32, 0.07, 0, kBlack);
   
   drawGamma(35, 60, 45, 50, 2, 1, kGreen+2);
   drawText(34, 53, "x_{B}", 32, 0.07, 0, kGreen+2);
   // proton
   // drawArrowLine(10, 10, 35, 20);
   // drawArrowLine(10, 8, 35, 18);
   // drawArrowLine(10, 12, 35, 22);
   // drawText(18, 6, "P", 32, 0.08, 0, kBlack);

   // drawArrowLine(42, 21, 85, 10);
   // drawArrowLine(42, 19, 85, 8);
   // drawArrowLine(42, 23, 85, 12);
   // drawText(68, 6, "P'", 32, 0.08, 0, kBlack);
   drawArrowLine(10, 10, 35, 20, 0.05, 30, 5, 1, kBlack);
   drawArrowLine(42, 21, 85, 10, 0.05, 30, 5, 1, kBlack);
   drawText(14, 6, "p/A", 32, 0.08, 0, kBlack);
   drawText(68, 6, "p'/A*", 32, 0.08, 0, kBlack);

   // charm quarks
   drawArrowLine(45, 50, 45, 35, 0.03, 30, 1, 1, kBlue);
   drawArrowLine(60, 54, 45, 50, 0.03, 30, 1, 1, kBlue);
   drawArrowLine(45, 35, 60, 32, 0.03, 30, 1, 1, kBlue);
   drawText(51, 53.5, "#bar{c}", 32, 0.06, 0, kBlue);
   drawText(51, 36, "c", 32, 0.06, 0, kBlue);
   drawGluon(35, 24, 45, 35, 1, 1, kRed+1);
   drawText(35, 32, "x_{g}", 32, 0.07, 0, kRed);

   drawArrowLine(90, 61.5, 65, 55, 0.03, 30, 3, 1, kBlue);
   //   drawArrowLine(90, 61, 65, 54.5, 0.03, 30, 1, 1, kBlue);
   drawText(72, 51, "#bar{D}", 32, 0.08, 0, kBlue);
   drawEllipse(62.5, 54.5, 2.8, 2.8, 0., 360., 0., 3005, kBlue, 1, 1, kBlue);
   
   //   drawArrowLine(65, 30, 90, 25, 0.03, 30, 3, 1, kBlue);
   drawArrowLine(65, 31, 90, 26., 0.03, 30, 3, 1, kBlue);
   drawText(72, 32., "#Lambda_{c}^{+}", 32, 0.08, 0, kBlue);
   drawEllipse(62.5, 31.5, 2.8, 2.8, 0., 360., 0., 3005, kBlue, 1, 1, kBlue);
   
   drawEllipse(38, 21, 6, 4, 0., 360., 0., 1000, 1);

   
   c1->Update();
   c1->SaveAs("../fig/Feynman_hfLcDIS.pdf");
   c1->SaveAs("../fig/Feynman_hfLcDIS.png");
   
}
