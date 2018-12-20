#ifndef DetectorConstruction_h
#define DetectorConstruction_h 1

#include "globals.hh"
#include "G4VUserDetectorConstruction.hh"
#include "G4RotationMatrix.hh"
#include "G4FieldManager.hh"
#include "G4Material.hh"

#include <vector>

class MagneticField;

class G4VPhysicalVolume;
class G4Material;
class G4VSensitiveDetector;
class G4VisAttributes;
class G4GenericMessenger;

/// Detector construction

class DetectorConstruction : public G4VUserDetectorConstruction
{
  public:
    DetectorConstruction();
    virtual ~DetectorConstruction();
    
    virtual G4VPhysicalVolume* Construct();
    virtual void ConstructSDandField();
    
    void ConstructMaterials();
    
  private:
    void DefineCommands();

    G4GenericMessenger* fMessenger;
    
    static G4ThreadLocal MagneticField* fMagneticField;
    static G4ThreadLocal G4FieldManager* fFieldMgr;
    
    G4LogicalVolume* logicWorld;
    G4LogicalVolume* ecalLogical;
    std::vector< std::vector<G4LogicalVolume*> > cellEcalBarLogical;
    G4LogicalVolume* ecalECLogical_r;
    G4LogicalVolume* ecalECLogical_l;
    std::vector<G4LogicalVolume*> cellEcalECLogical_r;
    std::vector<G4LogicalVolume*> cellEcalECLogical_l;
    G4LogicalVolume* fMagneticLogical;
    G4LogicalVolume* trackerLogical;
    G4LogicalVolume* ecalPSLogical_r;
    G4LogicalVolume* ecalPSLogical_l;
    
    std::vector<G4VisAttributes*> fVisAttributes;
    
		// Tracker Variables
	std::vector<G4Material*> pixBarMat;
	std::vector<G4Material*> pixECMat;
	std::vector<G4Material*> TIBMat;
	std::vector<G4Material*> TOBMat;
	std::vector<G4Material*> TECMat;
	std::vector<G4Material*> PShowerMat;
	std::vector<G4LogicalVolume*> PIB_Logical;
	std::vector<G4LogicalVolume*> PID_Logical;
	std::vector<G4LogicalVolume*> TIB_Logical;
	std::vector<G4LogicalVolume*> TID_Logical;
	std::vector<G4LogicalVolume*> TOB_Logical;
	std::vector<G4LogicalVolume*> TEC_Logical;
	std::vector<G4LogicalVolume*> cellEcalPS_l;
	std::vector<G4LogicalVolume*> cellEcalPS_r;

	G4int ecalMode;
	G4int tracMode;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif