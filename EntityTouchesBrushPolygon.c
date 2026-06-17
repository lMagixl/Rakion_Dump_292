
/* public: int __thiscall CClipTest::EntityTouchesBrushPolygon(class CBrushPolygon *) */

int __thiscall CClipTest::EntityTouchesBrushPolygon(CClipTest *this,CBrushPolygon *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x130d90  1573
                       ?EntityTouchesBrushPolygon@CClipTest@@QAEHPAVCBrushPolygon@@@Z */
  iVar2 = 0;
  if (0 < *(int *)(this + 0xc)) {
    iVar3 = 0;
    do {
      iVar1 = SphereTouchesBrushPolygon
                        (this,(CMovingSphere *)(*(int *)(this + 0x10) + iVar3),param_1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar2 < *(int *)(this + 0xc));
  }
  return 0;
}

