
/* public: __thiscall CIsometricProjection3D::CIsometricProjection3D(class CIsometricProjection3D
   const &) */

CIsometricProjection3D * __thiscall
CIsometricProjection3D::CIsometricProjection3D
          (CIsometricProjection3D *this,CIsometricProjection3D *param_1)

{
                    /* 0x34b0  119  ??0CIsometricProjection3D@@QAE@ABV0@@Z */
  CProjection3D::CProjection3D((CProjection3D *)this,(CProjection3D *)param_1);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  return this;
}

