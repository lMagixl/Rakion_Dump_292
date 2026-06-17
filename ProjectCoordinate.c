
/* public: void __thiscall CSimpleProjection3D_DOUBLE::ProjectCoordinate(class Vector<double,3>
   const &,class Vector<double,3> &)const  */

void __thiscall
CSimpleProjection3D_DOUBLE::ProjectCoordinate
          (CSimpleProjection3D_DOUBLE *this,Vector<double,3> *param_1,Vector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
                    /* 0x5d560  2855
                       ?ProjectCoordinate@CSimpleProjection3D_DOUBLE@@QBEXABV?$Vector@N$02@@AAV2@@Z
                        */
  dVar1 = *(double *)(this + 0x58);
  dVar2 = *(double *)param_1;
  dVar3 = *(double *)(this + 0x60);
  dVar4 = *(double *)(param_1 + 8);
  dVar5 = *(double *)(this + 0x68);
  dVar6 = *(double *)(param_1 + 0x10);
  dVar7 = *(double *)(this + 0x70);
  dVar8 = *(double *)param_1;
  dVar9 = *(double *)(this + 0x78);
  dVar10 = *(double *)(param_1 + 8);
  dVar11 = *(double *)(this + 0x80);
  dVar12 = *(double *)(param_1 + 0x10);
  dVar13 = *(double *)(this + 0xd8);
  dVar14 = *(double *)(this + 0xe0);
  *(double *)param_2 =
       *(double *)(this + 0x40) * *(double *)param_1 +
       *(double *)(this + 0x50) * *(double *)(param_1 + 0x10) +
       *(double *)(this + 0x48) * *(double *)(param_1 + 8) + *(double *)(this + 0xd0);
  *(double *)(param_2 + 8) = dVar5 * dVar6 + dVar3 * dVar4 + dVar1 * dVar2 + dVar13;
  *(double *)(param_2 + 0x10) = dVar11 * dVar12 + dVar9 * dVar10 + dVar7 * dVar8 + dVar14;
  return;
}

