<?php

namespace ContainerEClEvGD;

use Symfony\Component\DependencyInjection\Argument\RewindableGenerator;
use Symfony\Component\DependencyInjection\Exception\RuntimeException;

/**
 * @internal This class has been auto-generated by the Symfony Dependency Injection Component.
 */
class getAccessDeniedExceptionService extends App_KernelDevDebugContainer
{
    /**
     * Gets the private '.errored..service_locator.O7Rd0qR.Symfony\Component\Security\Core\Exception\AccessDeniedException' shared service.
     *
     * @return \Symfony\Component\Security\Core\Exception\AccessDeniedException
     */
    public static function do($container, $lazyLoad = true)
    {
        throw new RuntimeException('Cannot autowire service ".service_locator.O7Rd0qR": it references class "Symfony\\Component\\Security\\Core\\Exception\\AccessDeniedException" but no such service exists.');
    }
}
