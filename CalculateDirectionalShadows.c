
/* public: void __thiscall CWorld::CalculateDirectionalShadows(void) */

void __thiscall CWorld::CalculateDirectionalShadows(CWorld *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0xc8300  1128  ?CalculateDirectionalShadows@CWorld@@QAEXXZ */
  DAT_362fdad4 = 0;
  DAT_362fdad8 = 0;
  iVar3 = 0;
  piVar2 = *(int **)(*(int *)(this + 0x34) + 0x28);
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 == (int *)0x0) {
      return;
    }
    CBrushPolygon::MakeShadowMap((CBrushPolygon *)(piVar2 + -0x56),this,1);
    iVar3 = iVar3 + 1;
    piVar2 = piVar1;
  } while (iVar3 < 0x65);
  return;
}

