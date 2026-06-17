
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl BeginModelRenderingView(class CAnyProjection3D &,class CDrawPort *) */

void __cdecl BeginModelRenderingView(CAnyProjection3D *param_1,CDrawPort *param_2)

{
  int iVar1;
  
                    /* 0xbce80  1084
                       ?BeginModelRenderingView@@YAXAAVCAnyProjection3D@@PAVCDrawPort@@@Z */
  DAT_362ca520 = 1;
  DAT_362ca530 = param_2;
  DAT_362ca534 = CDrawPort::GetID(param_2);
  iVar1 = *(int *)(param_1 + 0x658);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  (**(code **)**(undefined4 **)(param_1 + 0x658))();
  iVar1 = *(int *)(param_1 + 0x658);
  if (*(int *)(iVar1 + 0x7c) != 0) {
    *(float *)(iVar1 + 0xa0) = *(float *)(iVar1 + 0xa0) - _DAT_36231db8;
  }
  CAnyProjection3D::operator=((CAnyProjection3D *)&DAT_362ca560,param_1);
  CDrawPort::SetProjection(DAT_362ca530,(CAnyProjection3D *)&DAT_362ca560);
  _DAT_362ca544 = 0x40;
  DAT_362c54e0 = 0;
  DAT_362c5500 = 0;
  DAT_362c5510 = 0;
  if (DAT_362a40b4 != 0) {
    DAT_362a40b4 = 1;
  }
  if (DAT_362c53f4 != 0) {
    DAT_362c53f4 = 1;
    FUN_3607c020(*(int *)(_pGfx + 0xaf4),DAT_362a40b4);
    return;
  }
  return;
}

