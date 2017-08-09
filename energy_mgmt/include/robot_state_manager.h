#ifndef ROBOT_STATE_MANAGER_H
#define ROBOT_STATE_MANAGER_H

#include <unordered_map>

#include <ros/ros.h>
#include <robot_state/robot_state.h>
#include <robot_state/GetRobotState.h>
#include <robot_state/SetRobotState.h>

#include "robot_state_em.h"

class RobotStateManager
{
public:
    RobotStateManager();
    RobotStateEM *getRobotState();

private:
    std::unordered_map<unsigned int, RobotStateEM*> stateMap; //https://stackoverflow.com/questions/25465224/making-a-map-in-which-the-value-type-is-an-abstract-class-in-c

    ros::ServiceClient get_robot_state_sc;
    ros::ServiceClient set_robot_state_sc;
};


#endif // ROBOT_STATE_MANAGER_H
