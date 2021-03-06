void data_PbPb_1_0()
{
//=========Macro generated from canvas: c1/
//=========  (Tue Feb 12 11:37:30 2019) by ROOT version6.02/13
   TCanvas *c1 = new TCanvas("c1", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(4.76834,-2.074172,6.055341,12.23046);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.18);
   c1->SetRightMargin(0.043);
   c1->SetBottomMargin(0.145);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *h11 = new TH1D("h11","",50,5,6);
   h11->SetBinContent(0,11);
   h11->SetBinContent(1,4);
   h11->SetBinContent(6,3);
   h11->SetBinContent(11,1);
   h11->SetBinContent(16,1);
   h11->SetBinContent(19,1);
   h11->SetBinContent(20,2);
   h11->SetBinContent(22,1);
   h11->SetBinContent(26,1);
   h11->SetBinContent(35,1);
   h11->SetBinContent(42,1);
   h11->SetBinContent(43,1);
   h11->SetBinContent(51,2);
   h11->SetMinimum(0);
   h11->SetMaximum(10.8);
   h11->SetEntries(30);
   h11->SetStats(0);
   h11->SetLineWidth(4);
   h11->SetMarkerStyle(20);
   h11->SetMarkerSize(1.55);
   h11->GetXaxis()->SetTitle("m_{J/#psi(#mu#mu)#phi(KK)} (GeV/c^{2})");
   h11->GetXaxis()->CenterTitle(true);
   h11->GetXaxis()->SetNdivisions(-50205);
   h11->GetXaxis()->SetLabelFont(42);
   h11->GetXaxis()->SetLabelSize(0.055);
   h11->GetXaxis()->SetTitleSize(0.055);
   h11->GetXaxis()->SetTitleFont(42);
   h11->GetYaxis()->SetTitle("Events / (20 MeV/c^{2})");
   h11->GetYaxis()->CenterTitle(true);
   h11->GetYaxis()->SetLabelFont(42);
   h11->GetYaxis()->SetLabelSize(0.055);
   h11->GetYaxis()->SetTitleSize(0.055);
   h11->GetYaxis()->SetTitleOffset(1.4);
   h11->GetYaxis()->SetTitleFont(42);
   h11->GetZaxis()->SetLabelFont(42);
   h11->GetZaxis()->SetLabelSize(0.035);
   h11->GetZaxis()->SetTitleSize(0.035);
   h11->GetZaxis()->SetTitleFont(42);
   h11->Draw("e");
   
   TF1 *background11 = new TF1("background1","[3]+[4]*x+[5]*x*x+[6]*x*x*x",5,6);
   background11->SetFillColor(19);
   background11->SetFillStyle(0);
   background11->SetLineColor(4);
   background11->SetLineStyle(7);
   background11->GetXaxis()->SetLabelFont(42);
   background11->GetXaxis()->SetLabelSize(0.035);
   background11->GetXaxis()->SetTitleSize(0.035);
   background11->GetXaxis()->SetTitleFont(42);
   background11->GetYaxis()->SetLabelFont(42);
   background11->GetYaxis()->SetLabelSize(0.035);
   background11->GetYaxis()->SetTitleSize(0.035);
   background11->GetYaxis()->SetTitleFont(42);
   background11->SetParameter(0,0);
   background11->SetParError(0,0);
   background11->SetParLimits(0,0,0);
   background11->SetParameter(1,0);
   background11->SetParError(1,0);
   background11->SetParLimits(1,0,0);
   background11->SetParameter(2,0);
   background11->SetParError(2,0);
   background11->SetParLimits(2,0,0);
   background11->SetParameter(3,18.46981);
   background11->SetParError(3,0);
   background11->SetParLimits(3,0,0);
   background11->SetParameter(4,-0.4290425);
   background11->SetParError(4,0);
   background11->SetParLimits(4,0,0);
   background11->SetParameter(5,-1.561619);
   background11->SetParError(5,0);
   background11->SetParLimits(5,0,0);
   background11->SetParameter(6,0.1880217);
   background11->SetParError(6,0);
   background11->SetParLimits(6,0,0);
   background11->Draw("same");
   
   TF1 *fmass12 = new TF1("fmass1","[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*([9]*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8])+(1-[9])*Gaus(x,[1],[10])/(sqrt(2*3.14159)*[10])))",5,6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   fmass12->SetFillColor(ci);
   fmass12->SetFillStyle(3002);

   ci = TColor::GetColor("#ff9900");
   fmass12->SetLineColor(ci);
   fmass12->SetLineStyle(7);
   fmass12->GetXaxis()->SetLabelFont(42);
   fmass12->GetXaxis()->SetLabelSize(0.035);
   fmass12->GetXaxis()->SetTitleSize(0.035);
   fmass12->GetXaxis()->SetTitleFont(42);
   fmass12->GetYaxis()->SetLabelFont(42);
   fmass12->GetYaxis()->SetLabelSize(0.035);
   fmass12->GetYaxis()->SetTitleSize(0.035);
   fmass12->GetYaxis()->SetTitleFont(42);
   fmass12->SetParameter(0,0.05835331);
   fmass12->SetParError(0,0.04127428);
   fmass12->SetParLimits(0,0,0);
   fmass12->SetParameter(1,5.38761);
   fmass12->SetParError(1,0.01430623);
   fmass12->SetParLimits(1,0,0);
   fmass12->SetParameter(2,0.01777563);
   fmass12->SetParError(2,0);
   fmass12->SetParLimits(2,0,0);
   fmass12->SetParameter(3,0);
   fmass12->SetParError(3,0);
   fmass12->SetParLimits(3,0,0);
   fmass12->SetParameter(4,0);
   fmass12->SetParError(4,0);
   fmass12->SetParLimits(4,0,0);
   fmass12->SetParameter(5,0);
   fmass12->SetParError(5,0);
   fmass12->SetParLimits(5,0,0);
   fmass12->SetParameter(6,0);
   fmass12->SetParError(6,0);
   fmass12->SetParLimits(6,0,0);
   fmass12->SetParameter(7,0.6249612);
   fmass12->SetParError(7,0);
   fmass12->SetParLimits(7,0,0);
   fmass12->SetParameter(8,0.01);
   fmass12->SetParError(8,0);
   fmass12->SetParLimits(8,0,0);
   fmass12->SetParameter(9,0.1535806);
   fmass12->SetParError(9,0);
   fmass12->SetParLimits(9,0,0);
   fmass12->SetParameter(10,0.03909395);
   fmass12->SetParError(10,0);
   fmass12->SetParLimits(10,0,0);
   fmass12->Draw("same");
   
   TF1 *f13 = new TF1("f1","[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*([9]*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8])+(1-[9])*Gaus(x,[1],[10])/(sqrt(2*3.14159)*[10])))+[3]+[4]*x+[5]*x*x+[6]*x*x*x",5,6);
   f13->SetNpx(5000);
   f13->SetFillColor(19);
   f13->SetFillStyle(0);
   f13->SetLineColor(2);
   f13->SetChisquare(13.92339);
   f13->SetNDF(44);
   f13->GetXaxis()->SetLabelFont(42);
   f13->GetXaxis()->SetLabelSize(0.035);
   f13->GetXaxis()->SetTitleSize(0.035);
   f13->GetXaxis()->SetTitleFont(42);
   f13->GetYaxis()->SetLabelFont(42);
   f13->GetYaxis()->SetLabelSize(0.035);
   f13->GetYaxis()->SetTitleSize(0.035);
   f13->GetYaxis()->SetTitleFont(42);
   f13->SetParameter(0,0.05835331);
   f13->SetParError(0,0.04127428);
   f13->SetParLimits(0,0,0);
   f13->SetParameter(1,5.38761);
   f13->SetParError(1,0.01430623);
   f13->SetParLimits(1,0,0);
   f13->SetParameter(2,0.01777563);
   f13->SetParError(2,0);
   f13->SetParLimits(2,0.01777563,0.01777563);
   f13->SetParameter(3,18.46981);
   f13->SetParError(3,2.022847);
   f13->SetParLimits(3,0,0);
   f13->SetParameter(4,-0.4290425);
   f13->SetParError(4,0.1752609);
   f13->SetParLimits(4,-0.7,-0.4);
   f13->SetParameter(5,-1.561619);
   f13->SetParError(5,0.143383);
   f13->SetParLimits(5,0,0);
   f13->SetParameter(6,0.1880217);
   f13->SetParError(6,0.01748708);
   f13->SetParLimits(6,0,0);
   f13->SetParameter(7,0.6249612);
   f13->SetParError(7,0);
   f13->SetParLimits(7,0.6249612,0.6249612);
   f13->SetParameter(8,0.01);
   f13->SetParError(8,0);
   f13->SetParLimits(8,0.01,0.01);
   f13->SetParameter(9,0.1535806);
   f13->SetParError(9,0);
   f13->SetParLimits(9,0.1535806,0.1535806);
   f13->SetParameter(10,0.03909395);
   f13->SetParError(10,0);
   f13->SetParLimits(10,0.03909395,0.03909395);
   f13->Draw("same");
   
   TH1D *h1_copy2 = new TH1D("h1_copy2","",50,5,6);
   h1_copy2->SetBinContent(0,11);
   h1_copy2->SetBinContent(1,4);
   h1_copy2->SetBinContent(6,3);
   h1_copy2->SetBinContent(11,1);
   h1_copy2->SetBinContent(16,1);
   h1_copy2->SetBinContent(19,1);
   h1_copy2->SetBinContent(20,2);
   h1_copy2->SetBinContent(22,1);
   h1_copy2->SetBinContent(26,1);
   h1_copy2->SetBinContent(35,1);
   h1_copy2->SetBinContent(42,1);
   h1_copy2->SetBinContent(43,1);
   h1_copy2->SetBinContent(51,2);
   h1_copy2->SetMinimum(0);
   h1_copy2->SetMaximum(10.8);
   h1_copy2->SetEntries(30);
   h1_copy2->SetDirectory(0);
   h1_copy2->SetStats(0);
   
   TF1 *f11 = new TF1("f1","[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*([9]*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8])+(1-[9])*Gaus(x,[1],[10])/(sqrt(2*3.14159)*[10])))+[3]+[4]*x+[5]*x*x+[6]*x*x*x",5,6);
   f11->SetNpx(5000);
   f11->SetFillColor(19);
   f11->SetFillStyle(0);
   f11->SetLineColor(2);
   f11->SetChisquare(13.92339);
   f11->SetNDF(44);
   f11->GetXaxis()->SetLabelFont(42);
   f11->GetXaxis()->SetLabelSize(0.035);
   f11->GetXaxis()->SetTitleSize(0.035);
   f11->GetXaxis()->SetTitleFont(42);
   f11->GetYaxis()->SetLabelFont(42);
   f11->GetYaxis()->SetLabelSize(0.035);
   f11->GetYaxis()->SetTitleSize(0.035);
   f11->GetYaxis()->SetTitleFont(42);
   f11->SetParameter(0,0.05835331);
   f11->SetParError(0,0.04127428);
   f11->SetParLimits(0,0,0);
   f11->SetParameter(1,5.38761);
   f11->SetParError(1,0.01430623);
   f11->SetParLimits(1,0,0);
   f11->SetParameter(2,0.01777563);
   f11->SetParError(2,0);
   f11->SetParLimits(2,0.01777563,0.01777563);
   f11->SetParameter(3,18.46981);
   f11->SetParError(3,2.022847);
   f11->SetParLimits(3,0,0);
   f11->SetParameter(4,-0.4290425);
   f11->SetParError(4,0.1752609);
   f11->SetParLimits(4,-0.7,-0.4);
   f11->SetParameter(5,-1.561619);
   f11->SetParError(5,0.143383);
   f11->SetParLimits(5,0,0);
   f11->SetParameter(6,0.1880217);
   f11->SetParError(6,0.01748708);
   f11->SetParLimits(6,0,0);
   f11->SetParameter(7,0.6249612);
   f11->SetParError(7,0);
   f11->SetParLimits(7,0.6249612,0.6249612);
   f11->SetParameter(8,0.01);
   f11->SetParError(8,0);
   f11->SetParLimits(8,0.01,0.01);
   f11->SetParameter(9,0.1535806);
   f11->SetParError(9,0);
   f11->SetParLimits(9,0.1535806,0.1535806);
   f11->SetParameter(10,0.03909395);
   f11->SetParError(10,0);
   f11->SetParLimits(10,0.03909395,0.03909395);
   h1_copy2->GetListOfFunctions()->Add(f11);
   h1_copy2->SetLineWidth(4);
   h1_copy2->SetMarkerStyle(20);
   h1_copy2->SetMarkerSize(1.55);
   h1_copy2->GetXaxis()->SetTitle("m_{J/#psi(#mu#mu)#phi(KK)} (GeV/c^{2})");
   h1_copy2->GetXaxis()->CenterTitle(true);
   h1_copy2->GetXaxis()->SetNdivisions(-50205);
   h1_copy2->GetXaxis()->SetLabelFont(42);
   h1_copy2->GetXaxis()->SetLabelSize(0.055);
   h1_copy2->GetXaxis()->SetTitleSize(0.055);
   h1_copy2->GetXaxis()->SetTitleFont(42);
   h1_copy2->GetYaxis()->SetTitle("Events / (20 MeV/c^{2})");
   h1_copy2->GetYaxis()->CenterTitle(true);
   h1_copy2->GetYaxis()->SetLabelFont(42);
   h1_copy2->GetYaxis()->SetLabelSize(0.055);
   h1_copy2->GetYaxis()->SetTitleSize(0.055);
   h1_copy2->GetYaxis()->SetTitleOffset(1.4);
   h1_copy2->GetYaxis()->SetTitleFont(42);
   h1_copy2->GetZaxis()->SetLabelFont(42);
   h1_copy2->GetZaxis()->SetLabelSize(0.035);
   h1_copy2->GetZaxis()->SetTitleSize(0.035);
   h1_copy2->GetZaxis()->SetTitleFont(42);
   h1_copy2->Draw("sameaxis");
   
   TLegend *leg = new TLegend(0.525,0.57,0.85,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.055);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h1","Data","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.55);
   entry->SetTextFont(42);
   entry=leg->AddEntry("f1","Fit","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("fmass1","Signal","f");

   ci = TColor::GetColor("#ff9900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(7);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("background1","Combinatorial","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(7);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.21,0.88,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.225,0.68,"B^{0}_{s}");
tex->SetNDC();
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.945,0.94,"1.5 nb^{-1} (PbPb 5.02 TeV)");
tex->SetNDC();
   tex->SetTextAlign(32);
   tex->SetTextFont(42);
   tex->SetTextSize(0.055);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TF1 *f12 = new TF1("f1","[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*([9]*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8])+(1-[9])*Gaus(x,[1],[10])/(sqrt(2*3.14159)*[10])))+[3]+[4]*x+[5]*x*x+[6]*x*x*x",5,6);
   f12->SetNpx(5000);
   f12->SetFillColor(19);
   f12->SetFillStyle(0);
   f12->SetLineColor(2);
   f12->SetChisquare(13.92339);
   f12->SetNDF(44);
   f12->GetXaxis()->SetLabelFont(42);
   f12->GetXaxis()->SetLabelSize(0.035);
   f12->GetXaxis()->SetTitleSize(0.035);
   f12->GetXaxis()->SetTitleFont(42);
   f12->GetYaxis()->SetLabelFont(42);
   f12->GetYaxis()->SetLabelSize(0.035);
   f12->GetYaxis()->SetTitleSize(0.035);
   f12->GetYaxis()->SetTitleFont(42);
   f12->SetParameter(0,0.05835331);
   f12->SetParError(0,0.04127428);
   f12->SetParLimits(0,0,0);
   f12->SetParameter(1,5.38761);
   f12->SetParError(1,0.01430623);
   f12->SetParLimits(1,0,0);
   f12->SetParameter(2,0.01777563);
   f12->SetParError(2,0);
   f12->SetParLimits(2,0.01777563,0.01777563);
   f12->SetParameter(3,18.46981);
   f12->SetParError(3,2.022847);
   f12->SetParLimits(3,0,0);
   f12->SetParameter(4,-0.4290425);
   f12->SetParError(4,0.1752609);
   f12->SetParLimits(4,-0.7,-0.4);
   f12->SetParameter(5,-1.561619);
   f12->SetParError(5,0.143383);
   f12->SetParLimits(5,0,0);
   f12->SetParameter(6,0.1880217);
   f12->SetParError(6,0.01748708);
   f12->SetParLimits(6,0,0);
   f12->SetParameter(7,0.6249612);
   f12->SetParError(7,0);
   f12->SetParLimits(7,0.6249612,0.6249612);
   f12->SetParameter(8,0.01);
   f12->SetParError(8,0);
   f12->SetParLimits(8,0.01,0.01);
   f12->SetParameter(9,0.1535806);
   f12->SetParError(9,0);
   f12->SetParLimits(9,0.1535806,0.1535806);
   f12->SetParameter(10,0.03909395);
   f12->SetParError(10,0);
   f12->SetParLimits(10,0.03909395,0.03909395);
   f12->Draw("same");
   
   TH1D *h13 = new TH1D("h13","",50,5,6);
   h13->SetBinContent(0,11);
   h13->SetBinContent(1,4);
   h13->SetBinContent(6,3);
   h13->SetBinContent(11,1);
   h13->SetBinContent(16,1);
   h13->SetBinContent(19,1);
   h13->SetBinContent(20,2);
   h13->SetBinContent(22,1);
   h13->SetBinContent(26,1);
   h13->SetBinContent(35,1);
   h13->SetBinContent(42,1);
   h13->SetBinContent(43,1);
   h13->SetBinContent(51,2);
   h13->SetMinimum(0);
   h13->SetMaximum(10.8);
   h13->SetEntries(30);
   h13->SetStats(0);
   h13->SetLineWidth(4);
   h13->SetMarkerStyle(20);
   h13->SetMarkerSize(1.55);
   h13->GetXaxis()->SetTitle("m_{J/#psi(#mu#mu)#phi(KK)} (GeV/c^{2})");
   h13->GetXaxis()->CenterTitle(true);
   h13->GetXaxis()->SetNdivisions(-50205);
   h13->GetXaxis()->SetLabelFont(42);
   h13->GetXaxis()->SetLabelSize(0.055);
   h13->GetXaxis()->SetTitleSize(0.055);
   h13->GetXaxis()->SetTitleFont(42);
   h13->GetYaxis()->SetTitle("Events / (20 MeV/c^{2})");
   h13->GetYaxis()->CenterTitle(true);
   h13->GetYaxis()->SetLabelFont(42);
   h13->GetYaxis()->SetLabelSize(0.055);
   h13->GetYaxis()->SetTitleSize(0.055);
   h13->GetYaxis()->SetTitleOffset(1.4);
   h13->GetYaxis()->SetTitleFont(42);
   h13->GetZaxis()->SetLabelFont(42);
   h13->GetZaxis()->SetLabelSize(0.035);
   h13->GetZaxis()->SetTitleSize(0.035);
   h13->GetZaxis()->SetTitleFont(42);
   h13->Draw("e same");
      tex = new TLatex(0.55,0.5,"#chi^{2}/nDOF: 46/44 = 1.1");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.55,0.54,"Significance = 1.4");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.55,0.44,"Yield = 2.9");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.35,0.85,"7 < p_{T} < 10 GeV/c, 0 < Cent < 100 ");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.75,0.8,"|y| < 2.4");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(-0.35,0.9341608,0.35,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*([9]*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8])+(1-[9])*Gaus(x,[1],[10])/(sqrt(2*3.14159)*[10])))+[3]+[4]*x+[5]*x*x+[6]*x*x*x");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
