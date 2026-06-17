
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RM_RenderCross(class Vector<float,3> &,unsigned long) */

void __cdecl RM_RenderCross(Vector<float,3> *param_1,ulong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
                    /* 0x164560  2924  ?RM_RenderCross@@YAXAAV?$Vector@M$02@@K@Z */
  (*DAT_362c4674)(0);
  (*DAT_362c462c)();
  (*DAT_362c4628)();
  (*DAT_362c4624)();
  (*DAT_362c461c)();
  fVar1 = *(float *)(param_1 + 4);
  fVar13 = *(float *)param_1 + _DAT_3623cd14;
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 4);
  fVar14 = *(float *)param_1 - _DAT_3623cd14;
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)param_1;
  fVar6 = *(float *)(param_1 + 8);
  fVar15 = *(float *)(param_1 + 4) + _DAT_3623cd14;
  fVar7 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 8);
  fVar16 = *(float *)(param_1 + 4) - _DAT_3623cd14;
  fVar9 = *(float *)param_1;
  fVar10 = *(float *)(param_1 + 4);
  fVar17 = *(float *)(param_1 + 8) + _DAT_3623cd14;
  fVar11 = *(float *)param_1;
  fVar12 = *(float *)(param_1 + 4);
  fVar18 = *(float *)(param_1 + 8) - _DAT_3623cd14;
  fVar20 = fVar5 * DAT_362fe118 + fVar6 * DAT_362fe120 + fVar15 * DAT_362fe11c + DAT_362fe124;
  fVar19 = fVar5 * DAT_362fe128 + fVar6 * DAT_362fe130 + fVar15 * DAT_362fe12c + DAT_362fe134;
  fVar5 = fVar15 * DAT_362fe13c + fVar5 * DAT_362fe138 + fVar6 * DAT_362fe140 + DAT_362fe144;
  fVar21 = fVar7 * DAT_362fe118 + fVar8 * DAT_362fe120 + fVar16 * DAT_362fe11c + DAT_362fe124;
  fVar15 = fVar7 * DAT_362fe128 + fVar8 * DAT_362fe130 + fVar16 * DAT_362fe12c + DAT_362fe134;
  fVar6 = fVar16 * DAT_362fe13c + fVar7 * DAT_362fe138 + fVar8 * DAT_362fe140 + DAT_362fe144;
  fVar16 = fVar9 * DAT_362fe118 + fVar17 * DAT_362fe120 + fVar10 * DAT_362fe11c + DAT_362fe124;
  fVar8 = fVar9 * DAT_362fe128 + fVar17 * DAT_362fe130 + fVar10 * DAT_362fe12c + DAT_362fe134;
  fVar7 = fVar10 * DAT_362fe13c + fVar9 * DAT_362fe138 + fVar17 * DAT_362fe140 + DAT_362fe144;
  fVar17 = fVar11 * DAT_362fe118 + fVar18 * DAT_362fe120 + fVar12 * DAT_362fe11c + DAT_362fe124;
  fVar10 = fVar11 * DAT_362fe128 + fVar18 * DAT_362fe130 + fVar12 * DAT_362fe12c + DAT_362fe134;
  fVar9 = fVar12 * DAT_362fe13c + fVar11 * DAT_362fe138 + fVar18 * DAT_362fe140 + DAT_362fe144;
  CDrawPort::DrawLine3D
            (DAT_362fe0d0,
             fVar13 * DAT_362fe118 + fVar2 * DAT_362fe120 + fVar1 * DAT_362fe11c + DAT_362fe124,
             fVar13 * DAT_362fe128 + fVar2 * DAT_362fe130 + fVar1 * DAT_362fe12c + DAT_362fe134,
             fVar1 * DAT_362fe13c + fVar13 * DAT_362fe138 + fVar2 * DAT_362fe140 + DAT_362fe144,
             fVar14 * DAT_362fe118 + fVar4 * DAT_362fe120 + fVar3 * DAT_362fe11c + DAT_362fe124,
             fVar14 * DAT_362fe128 + fVar4 * DAT_362fe130 + fVar3 * DAT_362fe12c + DAT_362fe134,
             fVar3 * DAT_362fe13c + fVar14 * DAT_362fe138 + fVar4 * DAT_362fe140 + DAT_362fe144,
             param_2);
  CDrawPort::DrawLine3D(DAT_362fe0d0,fVar20,fVar19,fVar5,fVar21,fVar15,fVar6,param_2);
  CDrawPort::DrawLine3D(DAT_362fe0d0,fVar16,fVar8,fVar7,fVar17,fVar10,fVar9,param_2);
  return;
}

