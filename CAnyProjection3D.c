
/* public: __thiscall CAnyProjection3D::CAnyProjection3D(class CAnyProjection3D const &) */

CAnyProjection3D * __thiscall
CAnyProjection3D::CAnyProjection3D(CAnyProjection3D *this,CAnyProjection3D *param_1)

{
                    /* 0xd640  17  ??0CAnyProjection3D@@QAE@ABV0@@Z */
  CProjection3D::CProjection3D((CProjection3D *)this);
  *(undefined ***)this = &CSimpleProjection3D::_vftable_;
  CProjection3D::CProjection3D((CProjection3D *)(this + 0x184));
  *(undefined ***)(this + 0x184) = &CIsometricProjection3D::_vftable_;
  CPerspectiveProjection3D::CPerspectiveProjection3D((CPerspectiveProjection3D *)(this + 0x30c));
  CProjection3D::CProjection3D((CProjection3D *)(this + 0x4b8));
  *(undefined ***)(this + 0x4b8) = &CParallelProjection3D::_vftable_;
  operator=(this,param_1);
  return this;
}

