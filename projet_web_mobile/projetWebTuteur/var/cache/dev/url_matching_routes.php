<?php

/**
 * This file has been auto-generated
 * by the Symfony Routing Component.
 */

return [
    false, // $matchHost
    [ // $staticRoutes
        '/_profiler' => [[['_route' => '_profiler_home', '_controller' => 'web_profiler.controller.profiler::homeAction'], null, null, null, true, false, null]],
        '/_profiler/search' => [[['_route' => '_profiler_search', '_controller' => 'web_profiler.controller.profiler::searchAction'], null, null, null, false, false, null]],
        '/_profiler/search_bar' => [[['_route' => '_profiler_search_bar', '_controller' => 'web_profiler.controller.profiler::searchBarAction'], null, null, null, false, false, null]],
        '/_profiler/phpinfo' => [[['_route' => '_profiler_phpinfo', '_controller' => 'web_profiler.controller.profiler::phpinfoAction'], null, null, null, false, false, null]],
        '/_profiler/open' => [[['_route' => '_profiler_open_file', '_controller' => 'web_profiler.controller.profiler::openAction'], null, null, null, false, false, null]],
        '/api/addUser' => [[['_route' => 'api_addUser', '_controller' => 'App\\Controller\\ApiController::addUser'], null, ['POST' => 0], null, false, false, null]],
        '/api/login' => [[['_route' => 'api_login', '_controller' => 'App\\Controller\\ApiController::mobileLogin'], null, ['POST' => 0], null, false, false, null]],
        '/api/complaintList' => [[['_route' => 'api_complaintList', '_controller' => 'App\\Controller\\ApiController::getComplaintList'], null, ['GET' => 0], null, false, false, null]],
        '/api/complaintFilter' => [[['_route' => 'api_getComplaintWithFilter', '_controller' => 'App\\Controller\\ApiController::getComplaint'], null, ['GET' => 0], null, false, false, null]],
        '/api/addMeeting' => [[['_route' => 'api_addMeeting', '_controller' => 'App\\Controller\\ApiController::addMeeting'], null, ['POST' => 0], null, false, false, null]],
        '/api/demandList' => [[['_route' => 'api_demandList', '_controller' => 'App\\Controller\\ApiController::getListDemand'], null, ['GET' => 0], null, false, false, null]],
        '/api/addDemand' => [[['_route' => 'api_addDemand', '_controller' => 'App\\Controller\\ApiController::addDemand'], null, ['POST' => 0], null, false, false, null]],
        '/api/addAnswer' => [[['_route' => 'api_addAnswer', '_controller' => 'App\\Controller\\ApiController::addAnswer'], null, ['POST' => 0], null, false, false, null]],
        '/api/statusList' => [[['_route' => 'api_statusList', '_controller' => 'App\\Controller\\ApiController::getListStatus'], null, ['GET' => 0], null, false, false, null]],
        '/api/addStatus' => [[['_route' => 'api_addStatus', '_controller' => 'App\\Controller\\ApiController::addStatus'], null, ['POST' => 0], null, false, false, null]],
        '/api/categoryList' => [[['_route' => 'api_categoryList', '_controller' => 'App\\Controller\\ApiController::getListCategory'], null, ['GET' => 0], null, false, false, null]],
        '/categoryList' => [[['_route' => 'app_categoryList', '_controller' => 'App\\Controller\\CategoryController::getListCategory'], null, null, null, false, false, null]],
        '/complaint' => [[['_route' => 'app_complaint', '_controller' => 'App\\Controller\\ComplaintController::index'], null, null, null, false, false, null]],
        '/demands' => [[['_route' => 'demands', '_controller' => 'App\\Controller\\DemandController::getDemands'], null, null, null, false, false, null]],
        '/' => [[['_route' => 'app_home', '_controller' => 'App\\Controller\\HomeController::index'], null, null, null, false, false, null]],
        '/meeting' => [[['_route' => 'app_meeting', '_controller' => 'App\\Controller\\MeetingController::meetings'], null, null, null, false, false, null]],
        '/register' => [[['_route' => 'app_register', '_controller' => 'App\\Controller\\RegistrationController::register'], null, null, null, false, false, null]],
        '/verify/email' => [[['_route' => 'app_verify_email', '_controller' => 'App\\Controller\\RegistrationController::verifyUserEmail'], null, null, null, false, false, null]],
        '/login' => [[['_route' => 'app_login', '_controller' => 'App\\Controller\\SecurityController::login'], null, null, null, false, false, null]],
        '/logout' => [[['_route' => 'app_logout', '_controller' => 'App\\Controller\\SecurityController::logout'], null, null, null, false, false, null]],
        '/listStatus' => [[['_route' => 'app_listStatus', '_controller' => 'App\\Controller\\StatusController::listStatus'], null, null, null, false, false, null]],
        '/users' => [[['_route' => 'users', '_controller' => 'App\\Controller\\UserController::listUsers'], null, null, null, false, false, null]],
    ],
    [ // $regexpList
        0 => '{^(?'
                .'|/_(?'
                    .'|error/(\\d+)(?:\\.([^/]++))?(*:38)'
                    .'|wdt/([^/]++)(*:57)'
                    .'|profiler/([^/]++)(?'
                        .'|/(?'
                            .'|search/results(*:102)'
                            .'|router(*:116)'
                            .'|exception(?'
                                .'|(*:136)'
                                .'|\\.css(*:149)'
                            .')'
                        .')'
                        .'|(*:159)'
                    .')'
                .')'
                .'|/a(?'
                    .'|ddComment/([^/]++)/([^/]++)/([^/]++)(*:210)'
                    .'|pi/(?'
                        .'|get(?'
                            .'|User/([^/]++)(*:243)'
                            .'|Tutors/([^/]++)(*:266)'
                            .'|Complaint/([^/]++)(*:292)'
                            .'|Status/([^/]++)(*:315)'
                        .')'
                        .'|compareEmail/([^/]++)(*:345)'
                        .'|de(?'
                            .'|lete(?'
                                .'|User/([^/]++)(*:378)'
                                .'|Meeting/([^/]++)(*:402)'
                                .'|Demand/([^/]++)(*:425)'
                                .'|Answer/([^/]++)(*:448)'
                                .'|Status/([^/]++)(*:471)'
                            .')'
                            .'|mand/([^/]++)(*:493)'
                        .')'
                        .'|m(?'
                            .'|yMeetingList/([^/]++)(*:527)'
                            .'|eetingId/([^/]++)(*:552)'
                        .')'
                        .'|answerList(?'
                            .'|Demand/([^/]++)(*:589)'
                            .'|User/([^/]++)(*:610)'
                        .')'
                        .'|status/([^/]++)(*:634)'
                    .')'
                    .'|ctivateUser/([^/]++)(*:663)'
                .')'
                .'|/complaintchangestatus/([^/]++)/([^/]++)(*:712)'
                .'|/de(?'
                    .'|mand/([^/]++)(*:739)'
                    .'|lete(?'
                        .'|Status/([^/]++)(*:769)'
                        .'|User/([^/]++)(*:790)'
                    .')'
                    .'|activateUser/([^/]++)(*:820)'
                .')'
                .'|/meeting/([^/]++)(*:846)'
                .'|/status/([^/]++)(*:870)'
                .'|/profile/([^/]++)(*:895)'
            .')/?$}sDu',
    ],
    [ // $dynamicRoutes
        38 => [[['_route' => '_preview_error', '_controller' => 'error_controller::preview', '_format' => 'html'], ['code', '_format'], null, null, false, true, null]],
        57 => [[['_route' => '_wdt', '_controller' => 'web_profiler.controller.profiler::toolbarAction'], ['token'], null, null, false, true, null]],
        102 => [[['_route' => '_profiler_search_results', '_controller' => 'web_profiler.controller.profiler::searchResultsAction'], ['token'], null, null, false, false, null]],
        116 => [[['_route' => '_profiler_router', '_controller' => 'web_profiler.controller.router::panelAction'], ['token'], null, null, false, false, null]],
        136 => [[['_route' => '_profiler_exception', '_controller' => 'web_profiler.controller.exception_panel::body'], ['token'], null, null, false, false, null]],
        149 => [[['_route' => '_profiler_exception_css', '_controller' => 'web_profiler.controller.exception_panel::stylesheet'], ['token'], null, null, false, false, null]],
        159 => [[['_route' => '_profiler', '_controller' => 'web_profiler.controller.profiler::panelAction'], ['token'], null, null, false, true, null]],
        210 => [[['_route' => 'addComment', '_controller' => 'App\\Controller\\AnswerController::addComment'], ['demand', 'user', 'comments'], null, null, false, true, null]],
        243 => [[['_route' => 'api_userId', '_controller' => 'App\\Controller\\ApiController::getUserWithId'], ['id'], ['GET' => 0], null, false, true, null]],
        266 => [[['_route' => 'api_tutorsFilter', '_controller' => 'App\\Controller\\ApiController::getTutorWithFilter'], ['filter'], ['GET' => 0], null, false, true, null]],
        292 => [[['_route' => 'api_getComplaint', '_controller' => 'App\\Controller\\ApiController::getComplaintWithId'], ['id'], ['GET' => 0], null, false, true, null]],
        315 => [[['_route' => 'getStatus', '_controller' => 'App\\Controller\\ApiController::getStatusWithFilter'], ['filter'], ['GET' => 0], null, false, true, null]],
        345 => [[['_route' => 'get_allTutors', '_controller' => 'App\\Controller\\ApiController::compareEmail'], ['email'], ['GET' => 0], null, false, true, null]],
        378 => [[['_route' => 'api_deleteUser', '_controller' => 'App\\Controller\\ApiController::deleteUser'], ['id'], ['DELETE' => 0], null, false, true, null]],
        402 => [[['_route' => 'api_deleteMeeting', '_controller' => 'App\\Controller\\ApiController::deleteMeeting'], ['id'], ['DELETE' => 0], null, false, true, null]],
        425 => [[['_route' => 'api_deleteDemand', '_controller' => 'App\\Controller\\ApiController::deleteDemand'], ['id'], ['DELETE' => 0], null, false, true, null]],
        448 => [[['_route' => 'api_deleteAnswer', '_controller' => 'App\\Controller\\ApiController::deleteAnswer'], ['id'], ['DELETE' => 0], null, false, true, null]],
        471 => [[['_route' => 'api_deleteStatus', '_controller' => 'App\\Controller\\ApiController::deleteStatus'], ['id'], ['DELETE' => 0], null, false, true, null]],
        493 => [[['_route' => 'api_demandId', '_controller' => 'App\\Controller\\ApiController::getDemandWIthiD'], ['id'], ['GET' => 0], null, false, true, null]],
        527 => [[['_route' => 'api_myMeetingList', '_controller' => 'App\\Controller\\ApiController::myMeetingList'], ['id'], ['GET' => 0], null, false, true, null]],
        552 => [[['_route' => 'api_MeetingId', '_controller' => 'App\\Controller\\ApiController::meetingWithId'], ['id'], ['GET' => 0], null, false, true, null]],
        589 => [[['_route' => 'api_answerListDemand', '_controller' => 'App\\Controller\\ApiController::getListAnswerDemand'], ['id'], ['GET' => 0], null, false, true, null]],
        610 => [[['_route' => 'api_answerListUser', '_controller' => 'App\\Controller\\ApiController::getListAnswerUser'], ['id'], ['GET' => 0], null, false, true, null]],
        634 => [[['_route' => 'api_statusId', '_controller' => 'App\\Controller\\ApiController::getStatusWithId'], ['id'], ['GET' => 0], null, false, true, null]],
        663 => [[['_route' => 'activateUser', '_controller' => 'App\\Controller\\UserController::activateUser'], ['id'], null, null, false, true, null]],
        712 => [[['_route' => 'changeStatus', '_controller' => 'App\\Controller\\ComplaintController::changeStatus'], ['statusId', 'complaintId'], null, null, false, true, null]],
        739 => [[['_route' => 'demand', '_controller' => 'App\\Controller\\DemandController::getDemand'], ['id'], null, null, false, true, null]],
        769 => [[['_route' => 'app_deleteStatus', '_controller' => 'App\\Controller\\StatusController::deleteStatus'], ['id'], null, null, false, true, null]],
        790 => [[['_route' => 'deleteUser', '_controller' => 'App\\Controller\\UserController::deleteUser'], ['id'], null, null, false, true, null]],
        820 => [[['_route' => 'deactivateUser', '_controller' => 'App\\Controller\\UserController::deactivateUser'], ['id'], null, null, false, true, null]],
        846 => [[['_route' => 'app_meetingId', '_controller' => 'App\\Controller\\MeetingController::meetingId'], ['id'], null, null, false, true, null]],
        870 => [[['_route' => 'app_statusId', '_controller' => 'App\\Controller\\StatusController::status'], ['id'], null, null, false, true, null]],
        895 => [
            [['_route' => 'profile', '_controller' => 'App\\Controller\\UserController::getProfile'], ['id'], null, null, false, true, null],
            [null, null, null, null, false, false, 0],
        ],
    ],
    null, // $checkCondition
];
