
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMovableEntity::SetPlacementFromNextPosition(void) */

void __thiscall CMovableEntity::SetPlacementFromNextPosition(CMovableEntity *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  Vector<float,3> local_218 [12];
  Matrix<float,3,3> local_20c [24];
  CClipMove aCStack_1f4 [456];
  float fStack_2c;
  
                    /* 0x1ab0a0  3554  ?SetPlacementFromNextPosition@CMovableEntity@@QAEXXZ */
  local_224 = *(undefined4 *)(this + 700);
  local_220 = *(undefined4 *)(this + 0x2c0);
  local_21c = *(undefined4 *)(this + 0x2c4);
  DecomposeRotationMatrixNoSnap(local_218,(Matrix<float,3,3> *)(this + 0x2c8));
  MakeRotationMatrixFast(local_20c,local_218);
  (**(code **)(*(int *)this + 0x10))(&local_224,local_20c,1);
  for (piVar4 = *(int **)(this + 0xc4); *piVar4 != 0; piVar4 = (int *)*piVar4) {
    if ((*(int *)(_pNetwork + 0x14) != 0) && ((piVar4[-0x2d] & 0x200U) != 0)) {
      iVar1 = piVar4[5];
      iVar2 = piVar4[6];
      iVar3 = piVar4[7];
      iStack_23c = piVar4[8];
      iStack_238 = piVar4[9];
      iStack_234 = piVar4[10];
      CPlacement3D::RelativeToAbsoluteSmooth
                ((CPlacement3D *)&stack0xfffffdb8,(CPlacement3D *)(this + 0x3c));
      MakeRotationMatrixFast((Matrix<float,3,3> *)(piVar4 + 0x83),(Vector<float,3> *)&iStack_23c);
      piVar4[0x80] = iVar1;
      piVar4[0x81] = iVar2;
      piVar4[0x82] = iVar3;
      FUN_360cdd50(aCStack_1f4,(CMovableEntity *)(piVar4 + -0x2f));
      CWorld::ClipMove(*(CWorld **)(this + 0xa8),aCStack_1f4);
      if (_DAT_36223384 < fStack_2c) {
        CEntity::SetPlacement((CEntity *)(piVar4 + -0x2f),(CPlacement3D *)&stack0xfffffdb8);
      }
    }
  }
  return;
}

