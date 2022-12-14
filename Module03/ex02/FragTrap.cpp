
# include "FragTrap.hpp"

FragTrap::FragTrap(std::string nam) : ClapTrap::ClapTrap(nam){
	setEP(100);
	setHP(100);
	setDamage(30);
	std::cout << "FragTrap "<< nam << " created." ;
	std::cout << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap "<< ret_Name() << " destroyed.";
	std::cout << std::endl;
}

// Attack : -1 EP
void	FragTrap::attack(const std::string& target) {
	setEP(-1);
	std::cout << "FragTrap " << ret_Name() << " punches! ";
	std::cout << target << ", causing " << ret_AD();
	std::cout << " AD!" << std::endl;
}

void	FragTrap::highfiveguys(){
	std::cout << "FragTrap" << ret_Name() << " highfives";
	std::cout << " da boys, they all happy." << std::endl;
}
