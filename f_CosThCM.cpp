#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
Int_t n0=6;
void f_CosThCM()
{
    Float_t AN[n0], Th_min[n0], Th_max[n0];
ifstream file_th;
file_th.open("CosThCM_limits.dat");

   TGraph *gr1 = new TGraph(n0,AN,Th_min);
   gr1->SetLineColor(2);

    mg->Draw("AC*");
    

}
//outcome function for Th_min: Thmin=-2.0429+0.0818989*ANR-0.000919773*ANR*ANR+2.91246e-06*ANR*ANR*ANR;
//outcome function for Th_max: Thmax=-1.90021+0.0696958*ANR-0.000596071*ANR*ANR+1.43855e-06*ANR*ANR*ANR;
//adding for checking the push
//Adding this line to check the pull
