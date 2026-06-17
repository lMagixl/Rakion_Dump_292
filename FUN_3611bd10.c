
void __thiscall FUN_3611bd10(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CBrush3D *this_00;
  int iVar4;
  CBrushMip *pCVar5;
  undefined4 *puVar6;
  int iVar7;
  CAnyProjection3D *pCVar8;
  float *pfVar9;
  float *pfVar10;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  this_00 = (CBrush3D *)param_1[0x1f];
  iVar4 = CListNode::IsLinked((CListNode *)(this_00 + 4));
  if (iVar4 == 0) {
    *(uint *)(this_00 + 0x670) = *(uint *)(this_00 + 0x670) & 0xfffffffd;
    pCVar5 = CBrush3D::GetFirstMip(this_00);
    iVar4 = FUN_36043600((int)pCVar5);
    if (((iVar4 == 0) && (DAT_362fcb8c != 0)) && (DAT_362a4164 != 0)) {
      FUN_3611a760(this,param_1);
    }
    CListHead::AddTail((CListHead *)((int)this + 0xe34),(CListNode *)(this_00 + 4));
    FUN_360ccb70((void *)((int)this + 0xdcc),param_1);
    if ((*(int *)((int)this + 0x6c0) == 0) || (((uint)param_1[4] & 0x200) == 0)) {
      pCVar8 = (CAnyProjection3D *)((int)this + 0x3c);
    }
    else {
      pCVar8 = (CAnyProjection3D *)((int)this + 0x6c8);
    }
    CAnyProjection3D::operator=((CAnyProjection3D *)(this_00 + 0xc),pCVar8);
    if (((uint)param_1[2] & 0x200) == 0) {
      iVar4 = *(int *)(this_00 + 0x664);
      local_24[0] = param_1[0x1b] * *(float *)(iVar4 + 0x100) +
                    param_1[0x18] * *(float *)(iVar4 + 0xfc) +
                    *(float *)(iVar4 + 0xf8) * param_1[0x15];
      local_24[1] = param_1[0x1c] * *(float *)(iVar4 + 0x100) +
                    *(float *)(iVar4 + 0xf8) * param_1[0x16] +
                    param_1[0x19] * *(float *)(iVar4 + 0xfc);
      local_24[2] = *(float *)(iVar4 + 0xfc) * param_1[0x1a] +
                    *(float *)(iVar4 + 0x100) * param_1[0x1d] +
                    *(float *)(iVar4 + 0xf8) * param_1[0x17];
      local_24[3] = *(float *)(iVar4 + 0x108) * param_1[0x18] +
                    param_1[0x15] * *(float *)(iVar4 + 0x104) +
                    *(float *)(iVar4 + 0x10c) * param_1[0x1b];
      local_14 = *(float *)(iVar4 + 0x104) * param_1[0x16] +
                 *(float *)(iVar4 + 0x108) * param_1[0x19] +
                 *(float *)(iVar4 + 0x10c) * param_1[0x1c];
      local_10 = *(float *)(iVar4 + 0x104) * param_1[0x17] +
                 *(float *)(iVar4 + 0x108) * param_1[0x1a] +
                 *(float *)(iVar4 + 0x10c) * param_1[0x1d];
      local_c = *(float *)(iVar4 + 0x114) * param_1[0x18] +
                param_1[0x15] * *(float *)(iVar4 + 0x110) +
                *(float *)(iVar4 + 0x118) * param_1[0x1b];
      local_8 = *(float *)(iVar4 + 0x110) * param_1[0x16] +
                *(float *)(iVar4 + 0x114) * param_1[0x19] +
                *(float *)(iVar4 + 0x118) * param_1[0x1c];
      local_4 = *(float *)(iVar4 + 0x110) * param_1[0x17] +
                *(float *)(iVar4 + 0x114) * param_1[0x1a] +
                *(float *)(iVar4 + 0x118) * param_1[0x1d];
      pfVar9 = local_24;
      pfVar10 = (float *)(iVar4 + 0xd4);
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar10 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar10 = pfVar10 + 1;
      }
      pfVar9 = local_24;
      pfVar10 = (float *)(iVar4 + 0xb0);
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar10 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar10 = pfVar10 + 1;
      }
      iVar7 = *(int *)(this_00 + 0x664);
      *(float *)(iVar7 + 4) = param_1[0xf];
      *(float *)(iVar7 + 8) = param_1[0x10];
      *(float *)(iVar7 + 0xc) = param_1[0x11];
      *(float *)(iVar7 + 0x10) = param_1[0x12];
      *(float *)(iVar7 + 0x14) = param_1[0x13];
      *(float *)(iVar7 + 0x18) = param_1[0x14];
      pfVar9 = (float *)(iVar4 + 0x11c);
      *pfVar9 = *(float *)(iVar4 + 4) - *(float *)(iVar4 + 0x40);
      *(float *)(iVar4 + 0x120) = *(float *)(iVar4 + 8) - *(float *)(iVar4 + 0x44);
      *(float *)(iVar4 + 0x124) = *(float *)(iVar4 + 0xc) - *(float *)(iVar4 + 0x48);
      fVar1 = *pfVar9;
      fVar2 = *(float *)(iVar4 + 0x120);
      fVar3 = *pfVar9;
      *pfVar9 = *pfVar9 * *(float *)(iVar4 + 0xf8) +
                *(float *)(iVar4 + 0x100) * *(float *)(iVar4 + 0x124) +
                *(float *)(iVar4 + 0xfc) * *(float *)(iVar4 + 0x120);
      *(float *)(iVar4 + 0x120) =
           *(float *)(iVar4 + 0x10c) * *(float *)(iVar4 + 0x124) +
           *(float *)(iVar4 + 0x104) * fVar1 + *(float *)(iVar4 + 0x108) * *(float *)(iVar4 + 0x120)
      ;
      *(float *)(iVar4 + 0x124) =
           *(float *)(iVar4 + 0x118) * *(float *)(iVar4 + 0x124) +
           *(float *)(iVar4 + 0x110) * fVar3 + *(float *)(iVar4 + 0x114) * fVar2;
      *(undefined4 *)(iVar4 + 0xa8) = 1;
    }
    else {
      iVar4 = *(int *)(this_00 + 0x664);
      puVar6 = (undefined4 *)(**(code **)((int)*param_1 + 100))(local_24);
      *(undefined4 *)(iVar4 + 4) = *puVar6;
      *(undefined4 *)(iVar4 + 8) = puVar6[1];
      *(undefined4 *)(iVar4 + 0xc) = puVar6[2];
      *(undefined4 *)(iVar4 + 0x10) = puVar6[3];
      *(undefined4 *)(iVar4 + 0x14) = puVar6[4];
      *(undefined4 *)(iVar4 + 0x18) = puVar6[5];
      iVar4 = *(int *)(this_00 + 0x664);
      *(undefined4 *)(iVar4 + 0x68) = 0x3f800000;
      local_24[0] = 1.0;
      *(undefined4 *)(iVar4 + 0x6c) = 0x3f800000;
      local_24[1] = 1.0;
      *(undefined4 *)(iVar4 + 0x70) = 0x3f800000;
      *(undefined4 *)(*(int *)(this_00 + 0x664) + 0x74) = 0;
      (**(code **)**(undefined4 **)(this_00 + 0x664))();
    }
    if (((uint)param_1[4] & 1) != 0) {
      *(uint *)(this_00 + 0x670) = *(uint *)(this_00 + 0x670) | 1;
      return;
    }
    *(uint *)(this_00 + 0x670) = *(uint *)(this_00 + 0x670) & 0xfffffffe;
  }
  return;
}

