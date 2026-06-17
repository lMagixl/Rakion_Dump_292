
void FUN_3609ea10(void)

{
  undefined4 *unaff_ESI;
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_8 [4];
  int iStack_4;
  
  piVar1 = (int *)unaff_ESI[2];
  puVar2 = local_8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
    if ((((uint)puVar2 & 1) == 0) ||
       ((**(code **)(*(int *)unaff_ESI[2] + 0x48))
                  ((int *)unaff_ESI[2],piVar1,puVar2,(uint)puVar2 & 1), iStack_4 != 0)) {
      (**(code **)(*(int *)unaff_ESI[2] + 8))((int *)unaff_ESI[2]);
      piVar1 = (int *)unaff_ESI[3];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)unaff_ESI[4];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      unaff_ESI[4] = 0;
      unaff_ESI[2] = 0;
      unaff_ESI[3] = 0;
    }
    unaff_ESI[1] = 0;
    *unaff_ESI = 0;
    return;
  }
  return;
}

