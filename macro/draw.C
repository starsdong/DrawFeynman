#include "TLine.h"
#include "TLatex.h"
#include "TArrow.h"
#include "TEllipse.h"
#include "TCurlyLine.h"
#include "TArc.h"
#include "TCurlyArc.h"
#include "iostream"

void drawHistBox(double x1=0., double x2=1., double y1=0., double y2=1., int lineWidth=3333, int lineStyle=1, int lineColor=1)
//void drawHistBox(double x1, double x2, double y1, double y2, int lineWidth)
{
  TLine *l1 = new TLine(x1,y1,x2,y1);
  l1->SetLineWidth(lineWidth/1000);
  l1->SetLineStyle(lineStyle);
  l1->SetLineColor(lineColor);
  l1->Draw("same");
  TLine *l2 = new TLine(x1,y2,x2,y2);
  l2->SetLineWidth((lineWidth%1000)/100);
  l2->SetLineStyle(lineStyle);
  l2->SetLineColor(lineColor);
  l2->Draw("same");
  TLine *l3 = new TLine(x1,y1,x1,y2);
  l3->SetLineWidth((lineWidth%100)/10);
  l3->SetLineStyle(lineStyle);
  l3->SetLineColor(lineColor);
  l3->Draw("same");
  TLine *l4 = new TLine(x2,y1,x2,y2);
  l4->SetLineWidth(lineWidth%10);
  l4->SetLineStyle(lineStyle);
  l4->SetLineColor(lineColor);
  l4->Draw("same");
}

void drawText(double x1=0., double y1=0., const char* text="test", int textFont=42, double textSize=0.05, double textAngle=0, int textColor=1)
{
  TLatex *tex = new TLatex(x1, y1, text);
  tex->SetTextFont(textFont);
  tex->SetTextSize(textSize);
  tex->SetTextAngle(textAngle);
  tex->SetTextColor(textColor);
  tex->Draw("same");
}

void drawLine(double x1=0., double y1=0., double x2=0., double y2=1., int lineWidth=1, int lineStyle=1, int lineColor=1)
{
  TLine *la = new TLine(x1,y1,x2,y2);
  la->SetLineWidth(lineWidth);
  la->SetLineStyle(lineStyle);
  la->SetLineColor(lineColor);
  la->Draw("same");
}

void drawArrowLine(double x1=0., double y1=0., double x2=0., double y2=1., double arrowSize = 0.03, double arrowAngle = 30, int lineWidth=1, int lineStyle=1, int lineColor=1)
{
  //  TArrow *la = new TArrow(x1,y1,x1+(x2-x1)/2.,y1+(y2-y1)/2.,arrowSize);
  TArrow *la = new TArrow(x1,y1,x2,y2,arrowSize,"-|>-");
  la->SetLineWidth(lineWidth);
  la->SetLineStyle(lineStyle);
  la->SetLineColor(lineColor);
  la->SetAngle(arrowAngle);
  la->Draw();

  // TLine *l0 = new TLine(x1+(x2-x1)/2.,y1+(y2-y1)/2.,x2,y2);
  // l0->SetLineWidth(lineWidth);
  // l0->SetLineStyle(lineStyle);
  // l0->SetLineColor(lineColor);
  // l0->Draw("same");
}

void drawGamma(double x1=0., double y1=0., double x2=0., double y2=1., int lineWidth=1, int lineStyle=1, int lineColor=1)
{
  TCurlyLine *lg = new TCurlyLine(x1,y1,x2,y2);
  lg->SetWavy();
  lg->SetLineWidth(lineWidth);
  lg->SetLineStyle(lineStyle);
  lg->SetLineColor(lineColor);
  lg->Draw("same");  
}

void drawGluon(double x1=0., double y1=0., double x2=0., double y2=1., int lineWidth=1, int lineStyle=1, int lineColor=1)
{
  TCurlyLine *lg = new TCurlyLine(x1,y1,x2,y2);
  lg->SetLineWidth(lineWidth);
  lg->SetLineStyle(lineStyle);
  lg->SetLineColor(lineColor);
  lg->Draw("same");  
}

void drawArc(double x1=0., double y1=0., double r=1., int lineWidth=1, int lineStyle=1, int lineColor=1)
{
  TArc *la = new TArc(x1,y1,r);
  la->SetLineWidth(lineWidth);
  la->SetLineStyle(lineStyle);
  la->SetLineColor(lineColor);
  la->Draw("same");
}

void drawGammaArc(double x1=0., double y1=0., double r=1., double phi1=0., double phi2=360., int lineWidth=1, int lineStyle=1, int lineColor=1)
{
  TCurlyArc *lg = new TCurlyArc(x1,y1,r,phi1,phi2);
  lg->SetWavy();
  lg->SetLineWidth(lineWidth);
  lg->SetLineStyle(lineStyle);
  lg->SetLineColor(lineColor);
  lg->Draw("same");  
}

void drawGluonArc(double x1=0., double y1=0., double r=1., double phi1=0., double phi2=360., int lineWidth=1, int lineStyle=1, int lineColor=1)
{
  TCurlyArc *lg = new TCurlyArc(x1,y1,r,phi1,phi2);
  lg->SetLineWidth(lineWidth);
  lg->SetLineStyle(lineStyle);
  lg->SetLineColor(lineColor);
  lg->Draw("same");  
}

void drawEllipse(double x1=0., double y1=0., double r1=1., double r2=1., double phi1=0., double phi2=360., double theta=0.,int fillStyle=1, int fillColor=1, int lineWidth=1, int lineStyle=1, int lineColor=1)
{
  TEllipse *la = new TEllipse(x1,y1,r1,r2,phi1,phi2,theta);
  la->SetLineWidth(lineWidth);
  la->SetLineStyle(lineStyle);
  la->SetLineColor(lineColor);
  la->SetFillStyle(fillStyle);
  la->SetFillColor(fillColor);
  la->Draw("same");  
}
