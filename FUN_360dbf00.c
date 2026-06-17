
void FUN_360dbf00(void)

{
  float fVar1;
  float fVar2;
  float *unaff_ESI;
  float *unaff_EDI;
  float local_c;
  float local_8;
  float local_4;
  
  AnglesToDirectionVector((Vector<float,3> *)(unaff_ESI + 3),(Vector<float,3> *)&local_c);
  fVar1 = unaff_ESI[1];
  fVar2 = unaff_ESI[2];
  *unaff_EDI = *unaff_ESI + local_c;
  unaff_EDI[1] = fVar1 + local_8;
  unaff_EDI[2] = fVar2 + local_4;
  return;
}

