#ifndef EX3_HEALTHPOINTS_H
#define EX3_HEALTHPOINTS_H
#include <string>

class HealthPoints {
public:

    static const int DEFAULT_MAX_HP = 100;
    /*
     * C'tor of HealthPoints:
     *
     * @param name - the name of the HealthPoints
     * @param MaxHP - the max level of HP the HealthPoints is able to have
     * @param force - the force of the HealthPoints
     *
     * @result
     *      a HealthPoints in Mtmchkin game
     *
     */
    HealthPoints(std::string name, int maxHP = DEFAULT_MAX_HP, int force = DEFAULT_FORCE);

    /*
     * prints the info of the HealthPoints -
     *      name,force,HP,level and number of coins
     */
    void printInfo() const;

    /*
     *levels up the HealthPoints
     * @return
     *      true if leveled up
     *      false otherwise
     */
    bool levelUp();

    /*
     *returns the level of the HealthPoints
     *@return
     *      int with the value of the level
     */
    int getLevel() const;

    /*
     *adds force to the HealthPoints
     * @param force - number of points that will be added to the force
     * @return
     *      true if the buff was given
     *      false otherwise
     */
    bool buff(int forcePoints);

    /*
     *heals the HealthPoints
     * @param heal - number of HP that will be added
     * @return
     *      true if the health points was given
     *      false otherwise
     */
    bool heal(int hp);

    /*
     * inflicts damage to the HealthPoints
     *@param damageHP - number of HP points that will subtract due to damage
     * @return
     *      true if the damage was dealt
     *      false otherwise
     */
    bool damage(int damage);

    /*
     *checks if a HealthPoints is knockedOut (has 0 HP)
     *@return
     *      true if the HealthPoints is knocked out
     *      false if he isn't
     */
    bool isKnockedOut() const;

    /*
     * add coins to the HealthPoints
     *@param coins - number of coins that will be added
     * @return
     *      true if the coins was given
     *      false othewise
     */
    bool addCoins(int coins);

    /*
     *payment method - subtracts coins from HealthPoints
     *@param pay - number of coins that will subtract
     * @return
     *      true if payment completed successfully
     *      false if the HealthPoints didn't have enough coins
     */
    bool pay(int coints);

    /*
     *returns the attack strength of the HealthPoints (force + level)
     *@return
     *      int with the above value
     */
    int getAttackStrength() const;

    /*
     *explicitly telling the compiler to use the default methods
     */
    HealthPoints(const HealthPoints&) = default;
    ~HealthPoints() = default;
    HealthPoints& operator=(const HealthPoints& other) = default;


private:
    int m_maxHP;
    int m_hp;
    int m_force;
    int m_level;
    int m_coins;
	std::string m_name;

};


#endif //EX3_HEALTHPOINTS_H