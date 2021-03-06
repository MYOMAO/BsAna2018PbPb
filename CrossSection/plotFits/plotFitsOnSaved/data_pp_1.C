void data_pp_1()
{
//=========Macro generated from canvas: c1/
//=========  (Fri Aug  3 02:43:04 2018) by ROOT version6.02/13
   TCanvas *c1 = new TCanvas("c1", "",0,0,600,600);
   c1->SetHighLightColor(2);
   c1->Range(4.76834,-20.469,6.055341,120.6965);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.18);
   c1->SetRightMargin(0.043);
   c1->SetBottomMargin(0.145);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *h11 = new TH1D("h11","",50,5,6);
   h11->SetBinContent(1,6);
   h11->SetBinContent(2,10);
   h11->SetBinContent(3,9);
   h11->SetBinContent(4,9);
   h11->SetBinContent(5,8);
   h11->SetBinContent(6,8);
   h11->SetBinContent(7,6);
   h11->SetBinContent(8,5);
   h11->SetBinContent(9,3);
   h11->SetBinContent(10,3);
   h11->SetBinContent(11,13);
   h11->SetBinContent(12,4);
   h11->SetBinContent(13,12);
   h11->SetBinContent(14,8);
   h11->SetBinContent(15,1);
   h11->SetBinContent(16,3);
   h11->SetBinContent(17,12);
   h11->SetBinContent(18,32);
   h11->SetBinContent(19,52);
   h11->SetBinContent(20,14);
   h11->SetBinContent(21,3);
   h11->SetBinContent(22,2);
   h11->SetBinContent(23,2);
   h11->SetBinContent(24,3);
   h11->SetBinContent(25,3);
   h11->SetBinContent(26,3);
   h11->SetBinContent(27,5);
   h11->SetBinContent(28,2);
   h11->SetBinContent(30,1);
   h11->SetBinContent(31,3);
   h11->SetBinContent(33,2);
   h11->SetBinContent(34,3);
   h11->SetBinContent(35,3);
   h11->SetBinContent(36,4);
   h11->SetBinContent(37,1);
   h11->SetBinContent(38,2);
   h11->SetBinContent(39,5);
   h11->SetBinContent(40,2);
   h11->SetBinContent(41,3);
   h11->SetBinContent(42,3);
   h11->SetBinContent(43,2);
   h11->SetBinContent(45,3);
   h11->SetBinContent(47,6);
   h11->SetBinContent(48,2);
   h11->SetBinContent(49,1);
   h11->SetBinContent(50,2);
   h11->SetMinimum(0);
   h11->SetMaximum(106.58);
   h11->SetEntries(289);
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
   
   TF1 *background11 = new TF1("background1","[3]+[4]*x",5,6);
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
   background11->SetParameter(3,33.49528);
   background11->SetParError(3,0);
   background11->SetParLimits(3,0,0);
   background11->SetParameter(4,-5.375282);
   background11->SetParError(4,0);
   background11->SetParLimits(4,0,0);
   background11->Draw("same");
   
   TF1 *fmass12 = new TF1("fmass1","[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8]))",5,6);

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
   fmass12->SetParameter(0,1.848947);
   fmass12->SetParError(0,0.2124853);
   fmass12->SetParLimits(0,0,0);
   fmass12->SetParameter(1,5.364199);
   fmass12->SetParError(1,0.001942752);
   fmass12->SetParLimits(1,0,0);
   fmass12->SetParameter(2,0.01294239);
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
   fmass12->SetParameter(7,0.7791413);
   fmass12->SetParError(7,0);
   fmass12->SetParLimits(7,0,0);
   fmass12->SetParameter(8,0.03860323);
   fmass12->SetParError(8,0);
   fmass12->SetParLimits(8,0,0);
   fmass12->Draw("same");
   
   TF1 *f13 = new TF1("f1","[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8]))+[3]+[4]*x",5,6);
   f13->SetNpx(5000);
   f13->SetFillColor(19);
   f13->SetFillStyle(0);
   f13->SetLineColor(2);
   f13->SetChisquare(107.0801);
   f13->SetNDF(44);
   f13->GetXaxis()->SetLabelFont(42);
   f13->GetXaxis()->SetLabelSize(0.035);
   f13->GetXaxis()->SetTitleSize(0.035);
   f13->GetXaxis()->SetTitleFont(42);
   f13->GetYaxis()->SetLabelFont(42);
   f13->GetYaxis()->SetLabelSize(0.035);
   f13->GetYaxis()->SetTitleSize(0.035);
   f13->GetYaxis()->SetTitleFont(42);
   f13->SetParameter(0,1.848947);
   f13->SetParError(0,0.2124853);
   f13->SetParLimits(0,0,0);
   f13->SetParameter(1,5.364199);
   f13->SetParError(1,0.001942752);
   f13->SetParLimits(1,0,0);
   f13->SetParameter(2,0.01294239);
   f13->SetParError(2,0);
   f13->SetParLimits(2,0.01294239,0.01294239);
   f13->SetParameter(3,33.49528);
   f13->SetParError(3,0.2538918);
   f13->SetParLimits(3,0,0);
   f13->SetParameter(4,-5.375282);
   f13->SetParError(4,0.04467815);
   f13->SetParLimits(4,0,0);
   f13->SetParameter(5,-615643.4);
   f13->SetParError(5,2.4);
   f13->SetParLimits(5,0,0);
   f13->SetParameter(6,0);
   f13->SetParError(6,1);
   f13->SetParLimits(6,0,0);
   f13->SetParameter(7,0.7791413);
   f13->SetParError(7,0);
   f13->SetParLimits(7,0.7791413,0.7791413);
   f13->SetParameter(8,0.03860323);
   f13->SetParError(8,0);
   f13->SetParLimits(8,0.03860323,0.03860323);
   f13->Draw("same");
   
   TH1D *h1_copy2 = new TH1D("h1_copy2","",50,5,6);
   h1_copy2->SetBinContent(1,6);
   h1_copy2->SetBinContent(2,10);
   h1_copy2->SetBinContent(3,9);
   h1_copy2->SetBinContent(4,9);
   h1_copy2->SetBinContent(5,8);
   h1_copy2->SetBinContent(6,8);
   h1_copy2->SetBinContent(7,6);
   h1_copy2->SetBinContent(8,5);
   h1_copy2->SetBinContent(9,3);
   h1_copy2->SetBinContent(10,3);
   h1_copy2->SetBinContent(11,13);
   h1_copy2->SetBinContent(12,4);
   h1_copy2->SetBinContent(13,12);
   h1_copy2->SetBinContent(14,8);
   h1_copy2->SetBinContent(15,1);
   h1_copy2->SetBinContent(16,3);
   h1_copy2->SetBinContent(17,12);
   h1_copy2->SetBinContent(18,32);
   h1_copy2->SetBinContent(19,52);
   h1_copy2->SetBinContent(20,14);
   h1_copy2->SetBinContent(21,3);
   h1_copy2->SetBinContent(22,2);
   h1_copy2->SetBinContent(23,2);
   h1_copy2->SetBinContent(24,3);
   h1_copy2->SetBinContent(25,3);
   h1_copy2->SetBinContent(26,3);
   h1_copy2->SetBinContent(27,5);
   h1_copy2->SetBinContent(28,2);
   h1_copy2->SetBinContent(30,1);
   h1_copy2->SetBinContent(31,3);
   h1_copy2->SetBinContent(33,2);
   h1_copy2->SetBinContent(34,3);
   h1_copy2->SetBinContent(35,3);
   h1_copy2->SetBinContent(36,4);
   h1_copy2->SetBinContent(37,1);
   h1_copy2->SetBinContent(38,2);
   h1_copy2->SetBinContent(39,5);
   h1_copy2->SetBinContent(40,2);
   h1_copy2->SetBinContent(41,3);
   h1_copy2->SetBinContent(42,3);
   h1_copy2->SetBinContent(43,2);
   h1_copy2->SetBinContent(45,3);
   h1_copy2->SetBinContent(47,6);
   h1_copy2->SetBinContent(48,2);
   h1_copy2->SetBinContent(49,1);
   h1_copy2->SetBinContent(50,2);
   h1_copy2->SetMinimum(0);
   h1_copy2->SetMaximum(106.58);
   h1_copy2->SetEntries(289);
   h1_copy2->SetDirectory(0);
   h1_copy2->SetStats(0);
   
   TF1 *f11 = new TF1("f1","[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8]))+[3]+[4]*x",5,6);
   f11->SetNpx(5000);
   f11->SetFillColor(19);
   f11->SetFillStyle(0);
   f11->SetLineColor(2);
   f11->SetChisquare(107.0801);
   f11->SetNDF(44);
   f11->GetXaxis()->SetLabelFont(42);
   f11->GetXaxis()->SetLabelSize(0.035);
   f11->GetXaxis()->SetTitleSize(0.035);
   f11->GetXaxis()->SetTitleFont(42);
   f11->GetYaxis()->SetLabelFont(42);
   f11->GetYaxis()->SetLabelSize(0.035);
   f11->GetYaxis()->SetTitleSize(0.035);
   f11->GetYaxis()->SetTitleFont(42);
   f11->SetParameter(0,1.848947);
   f11->SetParError(0,0.2124853);
   f11->SetParLimits(0,0,0);
   f11->SetParameter(1,5.364199);
   f11->SetParError(1,0.001942752);
   f11->SetParLimits(1,0,0);
   f11->SetParameter(2,0.01294239);
   f11->SetParError(2,0);
   f11->SetParLimits(2,0.01294239,0.01294239);
   f11->SetParameter(3,33.49528);
   f11->SetParError(3,0.2538918);
   f11->SetParLimits(3,0,0);
   f11->SetParameter(4,-5.375282);
   f11->SetParError(4,0.04467815);
   f11->SetParLimits(4,0,0);
   f11->SetParameter(5,-615643.4);
   f11->SetParError(5,2.4);
   f11->SetParLimits(5,0,0);
   f11->SetParameter(6,0);
   f11->SetParError(6,1);
   f11->SetParLimits(6,0,0);
   f11->SetParameter(7,0.7791413);
   f11->SetParError(7,0);
   f11->SetParLimits(7,0.7791413,0.7791413);
   f11->SetParameter(8,0.03860323);
   f11->SetParError(8,0);
   f11->SetParLimits(8,0.03860323,0.03860323);
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
      tex = new TLatex(0.95,0.94,"28.0 pb^{-1} (pp 5.02 TeV)");
tex->SetNDC();
   tex->SetTextAlign(32);
   tex->SetTextFont(42);
   tex->SetTextSize(0.055);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TF1 *f12 = new TF1("f1","[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8]))+[3]+[4]*x",5,6);
   f12->SetNpx(5000);
   f12->SetFillColor(19);
   f12->SetFillStyle(0);
   f12->SetLineColor(2);
   f12->SetChisquare(107.0801);
   f12->SetNDF(44);
   f12->GetXaxis()->SetLabelFont(42);
   f12->GetXaxis()->SetLabelSize(0.035);
   f12->GetXaxis()->SetTitleSize(0.035);
   f12->GetXaxis()->SetTitleFont(42);
   f12->GetYaxis()->SetLabelFont(42);
   f12->GetYaxis()->SetLabelSize(0.035);
   f12->GetYaxis()->SetTitleSize(0.035);
   f12->GetYaxis()->SetTitleFont(42);
   f12->SetParameter(0,1.848947);
   f12->SetParError(0,0.2124853);
   f12->SetParLimits(0,0,0);
   f12->SetParameter(1,5.364199);
   f12->SetParError(1,0.001942752);
   f12->SetParLimits(1,0,0);
   f12->SetParameter(2,0.01294239);
   f12->SetParError(2,0);
   f12->SetParLimits(2,0.01294239,0.01294239);
   f12->SetParameter(3,33.49528);
   f12->SetParError(3,0.2538918);
   f12->SetParLimits(3,0,0);
   f12->SetParameter(4,-5.375282);
   f12->SetParError(4,0.04467815);
   f12->SetParLimits(4,0,0);
   f12->SetParameter(5,-615643.4);
   f12->SetParError(5,2.4);
   f12->SetParLimits(5,0,0);
   f12->SetParameter(6,0);
   f12->SetParError(6,1);
   f12->SetParLimits(6,0,0);
   f12->SetParameter(7,0.7791413);
   f12->SetParError(7,0);
   f12->SetParLimits(7,0.7791413,0.7791413);
   f12->SetParameter(8,0.03860323);
   f12->SetParError(8,0);
   f12->SetParLimits(8,0.03860323,0.03860323);
   f12->Draw("same");
   
   TH1D *h13 = new TH1D("h13","",50,5,6);
   h13->SetBinContent(1,6);
   h13->SetBinContent(2,10);
   h13->SetBinContent(3,9);
   h13->SetBinContent(4,9);
   h13->SetBinContent(5,8);
   h13->SetBinContent(6,8);
   h13->SetBinContent(7,6);
   h13->SetBinContent(8,5);
   h13->SetBinContent(9,3);
   h13->SetBinContent(10,3);
   h13->SetBinContent(11,13);
   h13->SetBinContent(12,4);
   h13->SetBinContent(13,12);
   h13->SetBinContent(14,8);
   h13->SetBinContent(15,1);
   h13->SetBinContent(16,3);
   h13->SetBinContent(17,12);
   h13->SetBinContent(18,32);
   h13->SetBinContent(19,52);
   h13->SetBinContent(20,14);
   h13->SetBinContent(21,3);
   h13->SetBinContent(22,2);
   h13->SetBinContent(23,2);
   h13->SetBinContent(24,3);
   h13->SetBinContent(25,3);
   h13->SetBinContent(26,3);
   h13->SetBinContent(27,5);
   h13->SetBinContent(28,2);
   h13->SetBinContent(30,1);
   h13->SetBinContent(31,3);
   h13->SetBinContent(33,2);
   h13->SetBinContent(34,3);
   h13->SetBinContent(35,3);
   h13->SetBinContent(36,4);
   h13->SetBinContent(37,1);
   h13->SetBinContent(38,2);
   h13->SetBinContent(39,5);
   h13->SetBinContent(40,2);
   h13->SetBinContent(41,3);
   h13->SetBinContent(42,3);
   h13->SetBinContent(43,2);
   h13->SetBinContent(45,3);
   h13->SetBinContent(47,6);
   h13->SetBinContent(48,2);
   h13->SetBinContent(49,1);
   h13->SetBinContent(50,2);
   h13->SetMinimum(0);
   h13->SetMaximum(106.58);
   h13->SetEntries(289);
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
      tex = new TLatex(0.55,0.5,"#chi^{2}/nDOF: 78/44 = 1.8");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.55,0.54,"Significance = 8.6");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.55,0.44,"Yield = 92");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.55,0.85,"7 < p_{T} < 15 GeV/c");
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
   AText = pt->AddText("[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8]))+[3]+[4]*x");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
