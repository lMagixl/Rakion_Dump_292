
/* public: void __thiscall CWorld::CalculateNonDirectionalShadows(void) */

void __thiscall CWorld::CalculateNonDirectionalShadows(CWorld *this)

{
  int *piVar1;
  int *piVar2;
  
                    /* 0xc8350  1134  ?CalculateNonDirectionalShadows@CWorld@@QAEXXZ */
  piVar2 = *(int **)(*(int *)(this + 0x34) + 0x28);
  while (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0) {
    CBrushPolygon::MakeShadowMap((CBrushPolygon *)(piVar2 + -0x56),this,0);
    piVar2 = piVar1;
  }
  return;
}

