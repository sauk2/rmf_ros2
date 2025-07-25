^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package rmf_fleet_adapter_python
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

2.11.1 (2025-07-21)
-------------------
* Remove pybind11 vendored dependencies (`#444 <https://github.com/open-rmf/rmf_ros2/issues/444>`_)
* Add a check for numpy version (`#451 <https://github.com/open-rmf/rmf_ros2/pull/451>`_)
* Contributors: Luca Della Vedova, Arjo Chakravarty

2.11.0 (2025-06-09)
-------------------

2.10.1 (2025-05-13)
-------------------

2.10.0 (2025-05-09)
-------------------
* Add a timer to log the size of planner caches (`#427 <https://github.com/open-rmf/rmf_ros2/issues/427>`_)
* Do not update assignments if bid notice is for a dry run (`#401 <https://github.com/open-rmf/rmf_ros2/issues/401>`_)
* Contributors: Grey, yadunund

2.9.0 (2024-11-27)
------------------
* Allow automatic action cancellation to be toggled (`#392 <https://github.com/open-rmf/rmf_ros2/issues/392>`_)
* Adds a simple parking spot management system.  (`#325 <https://github.com/open-rmf/rmf_ros2/issues/325>`_)
* Allow robot-specific finishing request and specify parking spots (`#379 <https://github.com/open-rmf/rmf_ros2/issues/379>`_)
* Provide an API that says the robot's lift destination (`#376 <https://github.com/open-rmf/rmf_ros2/issues/376>`_)
* Quiet cancel API (`#357 <https://github.com/open-rmf/rmf_ros2/issues/357>`_)
* Contributors: Arjo Chakravarty, Grey, Xiyu

2.8.0 (2024-06-12)
------------------

2.7.1 (2024-06-11)
------------------

2.7.0 (2024-06-01)
------------------
* Add fleet-level reassign dispatched tasks API (`#348 <https://github.com/open-rmf/rmf_ros2/pull/348>`_)
* Disable automatic retreat (`#330 <https://github.com/open-rmf/rmf_ros2/pull/330>`_)
* Stabilize commissioning feature (`#338 <https://github.com/open-rmf/rmf_ros2/pull/338>`_)
* Add all_known_lifts in Graph binding (`#336 <https://github.com/open-rmf/rmf_ros2/pull/336>`_)
* Add Speed Limit Requests (`#335 <https://github.com/open-rmf/rmf_ros2/pull/335>`_)
* Contributors: cwrx777, Grey, Pranay Shirodkar, Xiyu, Yadunund

2.6.0 (2024-03-13)
------------------
* add in_lift readonly property in Graph::Waypoint binding. (`#326 <https://github.com/open-rmf/rmf_ros2/pull/326>`_)
* Contributors: cwrx777

2.5.0 (2023-12-22)
------------------

2.4.0 (2023-12-15)
------------------

2.3.2 (2023-08-28)
------------------
* EasyFullControl API (`#235 <https://github.com/open-rmf/rmf_ros2/pull/235>`_)
* Contributors: Grey, Luca Della Vedova, Xiyu, Yadunund

2.3.1 (2023-08-10)
------------------
* Adding initiator and request time to booking (`#267 <https://github.com/open-rmf/rmf_ros2/pull/267>`_)
* Contributors: Aaron Chong

2.3.0 (2023-06-08)
------------------

2.2.0 (2023-06-06)
------------------
* Switch to rst changelogs (`#276 <https://github.com/open-rmf/rmf_ros2/pull/276>`_)
* Contributors: Yadunund

2.1.5 (2023-05-20)
------------------

2.1.4 (2023-04-27)
------------------

2.1.3 (2023-04-26)
------------------

2.1.2 (2022-10-10)
------------------

2.1.0 (2022-10-03)
------------------
* Make async behaviors more robust: (`#228 <https://github.com/open-rmf/rmf_ros2/pull/228>`_)
* Allow fleet adapters to change schedule participant profiles: (`#229 <https://github.com/open-rmf/rmf_ros2/pull/229>`_)
* Allow robots to be decommissioned from the task dispatch system: (`#233 <https://github.com/open-rmf/rmf_ros2/pull/233>`_)
* Allow manual toggling of stubborn negotiation: (`#196 <https://github.com/open-rmf/rmf_ros2/pull/196>`_)
* Allow users to specify a custom update listener: (`#198 <https://github.com/open-rmf/rmf_ros2/pull/198>`_)
* Fix various segfaults related to pybind: (`#205 <https://github.com/open-rmf/rmf_ros2/pull/205>`_)
* Allow `ResponsiveWait` to be enabled and disabled: (`#209 <https://github.com/open-rmf/rmf_ros2/pull/209>`_)
* Allow robot status to be overridden by the user: (`#191 <https://github.com/open-rmf/rmf_ros2/pull/191>`_)
* Add API to report status for `perform_action`: (`#190 <https://github.com/open-rmf/rmf_ros2/pull/190>`_)
* Changes for humble compatibility: (`#215 <https://github.com/open-rmf/rmf_ros2/pull/215>`_)

2.0.0 (2022-03-18)
------------------
No changes yet

1.5.0 (2022-02-14)
------------------
* Support flexible task definitions (`#168 <https://github.com/open-rmf/rmf_ros2/pull/168>`_)
* Add lane speed limit to graph parsing function (`#124 <https://github.com/open-rmf/rmf_ros2/pull/124>`_)

1.3.0 (2021-06-07)
------------------
* Modifications to support refactor of rmf_task (`#51 <https://github.com/open-rmf/rmf_ros2/pull/51>`_)
* Fix symlink-install compilation (`#32 <https://github.com/open-rmf/rmf_ros2/pull/32>`_)
* Updated package.xml (`#26 <https://github.com/open-rmf/rmf_ros2/pull/26>`_)
* Fix/rmf task ros2 cleanup (`#21 <https://github.com/open-rmf/rmf_ros2/pull/21>`_)
* Feature/python binding planner (`#11 <https://github.com/open-rmf/rmf_ros2/pull/11>`_)
* Adding reference_internal tag to function bindings that return raw pointers (`#6 <https://github.com/open-rmf/rmf_ros2/pull/6>`_)
* Feature/add unstable participant api (`#11 <https://github.com/open-rmf/rmf_ros2/pull/11>`_)
* Feature/add simple docs (`#9 <https://github.com/open-rmf/rmf_ros2/pull/9>`_)
* Support apis for task dispatcher (`#10 <https://github.com/open-rmf/rmf_ros2/pull/10>`_)
* differentiate functions to prevent overloading (`#8 <https://github.com/open-rmf/rmf_ros2/pull/8>`_)
* support ez traffic light (`#7 <https://github.com/open-rmf/rmf_ros2/pull/7>`_)
* Update/release 1.1 (`#6 <https://github.com/open-rmf/rmf_ros2/pull/6>`_)
* Implement binding for Duration optional
* Make integration test even stricter
* Add reference capture for posterity
* Add clarifying printouts and fix multi-timer bug
* Integrate compute_plan_starts into integration test
* Implement type tests
* Bind optional constructors and delivery msg interfaces
* Bind compute_plan_starts
* Add update_position overload
* Implement Python Bindings for rmf_fleet_adapter (`#1 <https://github.com/open-rmf/rmf_ros2/pull/1>`_)
* Contributors: Aaron Chong, Charayaphan Nakorn Boon Han, Geoffrey Biggs, Grey, Marco A. Gutiérrez, Yadu, methylDragon, youliang
