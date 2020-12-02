
#ifndef __Guidon__
#define __Guidon__

class Velo;

class Guidon {
  private:
    Velo* velo;

  public:
    Guidon() {
      velo = nullptr;
    }
  
    Velo* getVelo() const {
      return velo;
    }
    void setVelo(Velo* v) {
      this->velo = v;
    }
};

#endif

