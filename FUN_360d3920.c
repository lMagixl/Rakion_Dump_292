
void FUN_360d3920(void)

{
  FPUPrecisionType FVar1;
  
  FVar1 = GetFPUPrecision();
  if (FVar1 != 1) {
    SetFPUPrecision(1);
  }
  return;
}

