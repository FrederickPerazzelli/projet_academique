<?php

namespace ContainerEClEvGD;

use Symfony\Component\DependencyInjection\Argument\RewindableGenerator;
use Symfony\Component\DependencyInjection\Exception\RuntimeException;

/**
 * @internal This class has been auto-generated by the Symfony Dependency Injection Component.
 */
class get_ServiceLocator_8XkOpJpService extends App_KernelDevDebugContainer
{
    /**
     * Gets the private '.service_locator.8XkOpJp' shared service.
     *
     * @return \Symfony\Component\DependencyInjection\ServiceLocator
     */
    public static function do($container, $lazyLoad = true)
    {
        return $container->privates['.service_locator.8XkOpJp'] = new \Symfony\Component\DependencyInjection\Argument\ServiceLocator($container->getService, [
            'authenticator' => ['privates', 'App\\Security\\AuthUserAuthenticator', 'getAuthUserAuthenticatorService', true],
            'doctrine' => ['services', 'doctrine', 'getDoctrineService', false],
            'entityManager' => ['services', 'doctrine.orm.default_entity_manager', 'getDoctrine_Orm_DefaultEntityManagerService', false],
            'mailer' => ['privates', 'mailer.mailer', 'getMailer_MailerService', true],
            'userAuthenticator' => ['privates', 'security.user_authenticator', 'getSecurity_UserAuthenticatorService', true],
            'userPasswordHasher' => ['privates', 'security.user_password_hasher', 'getSecurity_UserPasswordHasherService', true],
        ], [
            'authenticator' => 'App\\Security\\AuthUserAuthenticator',
            'doctrine' => '?',
            'entityManager' => '?',
            'mailer' => '?',
            'userAuthenticator' => '?',
            'userPasswordHasher' => '?',
        ]);
    }
}
