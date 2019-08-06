#ifndef HCalConstruction_h
#define HCalConstruction_h 1

#include "G4Material.hh"
#include "G4LogicalVolume.hh"
#include "G4VisAttributes.hh"

#include <vector>

class HCalConstruction
{
public:
  HCalConstruction();
  virtual ~HCalConstruction();

  void makeBarrel(G4Material*, G4Material*, G4LogicalVolume*, std::vector<G4VisAttributes*>);
  void makeEndCap(G4Material*, G4Material*, G4LogicalVolume*, G4LogicalVolume*, std::vector<G4VisAttributes*>);

private:
  std::vector< std::vector< std::vector<G4LogicalVolume*> > > cellHcalBarAbsLogical;
  std::vector< std::vector< std::vector<G4LogicalVolume*> > > cellHcalBarScnLogical;
  std::vector< std::vector< std::vector<G4LogicalVolume*> > > cellHcalECAbsLogical_r;
  std::vector< std::vector< std::vector<G4LogicalVolume*> > > cellHcalECAbsLogical_l;
  std::vector< std::vector< std::vector<G4LogicalVolume*> > > cellHcalECScnLogical_r;
  std::vector< std::vector< std::vector<G4LogicalVolume*> > > cellHcalECScnLogical_l;
  G4VisAttributes* visAttributes; 
};

#endif
