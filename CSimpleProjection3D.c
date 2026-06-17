
/* public: __thiscall CSimpleProjection3D::CSimpleProjection3D(class CSimpleProjection3D const &) */

CSimpleProjection3D * __thiscall
CSimpleProjection3D::CSimpleProjection3D(CSimpleProjection3D *this,CSimpleProjection3D *param_1)

{
                    /* 0x3610  228  ??0CSimpleProjection3D@@QAE@ABV0@@Z */
  CProjection3D::CProjection3D((CProjection3D *)this,(CProjection3D *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}

