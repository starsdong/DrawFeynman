#include "style.C+"
#include "draw.C+"

void example()
{
   //Draw Feynman diagrams
   // To see the output of this macro, click here
   //Author: Otto Schaile
   
   TCanvas *c1 = new TCanvas("c1", "A canvas", 10,10, 600, 300);
   c1->Range(0, 0, 140, 60);
   Int_t linsav = gStyle->GetLineWidth();
   gStyle->SetLineWidth(3);

   drawLine(10., 10., 30., 30.);
   drawLine(10., 50., 30., 30.);
   drawText(7,6,"e^{-}",22,0.1);
   drawText(7,55,"e^{+}",22,0.1);

   drawGammaArc(30, 30, 12.5*sqrt(2), 135, 225);
   drawText(7,30,"#gamma",22,0.1);

   drawGamma(30, 30, 55, 30);
   drawText(42.5,37.7,"#gamma",22,0.1);

   drawArc(70, 30, 15);
   drawText(55, 45,"#bar{q}",22,0.1);
   drawText(85, 15,"q",22,0.1);

   drawGluon(70, 45, 70, 15);
   drawText(77.5,30,"g",22,0.1);

   drawGamma(85, 30, 110, 30);
   drawText(100, 37.5,"Z^{0}",22,0.1);

   drawLine(110, 30, 130, 10);
   drawLine(110, 30, 130, 50);
   drawText(135,6,"#bar{q}",22,0.1);
   drawText(135,55,"q",22,0.1);

   drawGluonArc(110, 30, 12.5*sqrt(2), 315, 45);
   drawText(135,30,"g",22,0.1);
   
   c1->Update();
}
