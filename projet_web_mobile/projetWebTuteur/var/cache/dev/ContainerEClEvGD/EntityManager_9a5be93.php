<?php

namespace ContainerEClEvGD;
include_once \dirname(__DIR__, 4).''.\DIRECTORY_SEPARATOR.'vendor'.\DIRECTORY_SEPARATOR.'doctrine'.\DIRECTORY_SEPARATOR.'persistence'.\DIRECTORY_SEPARATOR.'src'.\DIRECTORY_SEPARATOR.'Persistence'.\DIRECTORY_SEPARATOR.'ObjectManager.php';
include_once \dirname(__DIR__, 4).''.\DIRECTORY_SEPARATOR.'vendor'.\DIRECTORY_SEPARATOR.'doctrine'.\DIRECTORY_SEPARATOR.'orm'.\DIRECTORY_SEPARATOR.'lib'.\DIRECTORY_SEPARATOR.'Doctrine'.\DIRECTORY_SEPARATOR.'ORM'.\DIRECTORY_SEPARATOR.'EntityManagerInterface.php';
include_once \dirname(__DIR__, 4).''.\DIRECTORY_SEPARATOR.'vendor'.\DIRECTORY_SEPARATOR.'doctrine'.\DIRECTORY_SEPARATOR.'orm'.\DIRECTORY_SEPARATOR.'lib'.\DIRECTORY_SEPARATOR.'Doctrine'.\DIRECTORY_SEPARATOR.'ORM'.\DIRECTORY_SEPARATOR.'EntityManager.php';

class EntityManager_9a5be93 extends \Doctrine\ORM\EntityManager implements \ProxyManager\Proxy\VirtualProxyInterface
{
    /**
     * @var \Doctrine\ORM\EntityManager|null wrapped object, if the proxy is initialized
     */
    private $valueHolderbb136 = null;

    /**
     * @var \Closure|null initializer responsible for generating the wrapped object
     */
    private $initializera5538 = null;

    /**
     * @var bool[] map of public properties of the parent class
     */
    private static $publicProperties5f424 = [
        
    ];

    public function getConnection()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getConnection', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getConnection();
    }

    public function getMetadataFactory()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getMetadataFactory', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getMetadataFactory();
    }

    public function getExpressionBuilder()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getExpressionBuilder', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getExpressionBuilder();
    }

    public function beginTransaction()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'beginTransaction', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->beginTransaction();
    }

    public function getCache()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getCache', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getCache();
    }

    public function transactional($func)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'transactional', array('func' => $func), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->transactional($func);
    }

    public function wrapInTransaction(callable $func)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'wrapInTransaction', array('func' => $func), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->wrapInTransaction($func);
    }

    public function commit()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'commit', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->commit();
    }

    public function rollback()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'rollback', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->rollback();
    }

    public function getClassMetadata($className)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getClassMetadata', array('className' => $className), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getClassMetadata($className);
    }

    public function createQuery($dql = '')
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'createQuery', array('dql' => $dql), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->createQuery($dql);
    }

    public function createNamedQuery($name)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'createNamedQuery', array('name' => $name), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->createNamedQuery($name);
    }

    public function createNativeQuery($sql, \Doctrine\ORM\Query\ResultSetMapping $rsm)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'createNativeQuery', array('sql' => $sql, 'rsm' => $rsm), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->createNativeQuery($sql, $rsm);
    }

    public function createNamedNativeQuery($name)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'createNamedNativeQuery', array('name' => $name), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->createNamedNativeQuery($name);
    }

    public function createQueryBuilder()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'createQueryBuilder', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->createQueryBuilder();
    }

    public function flush($entity = null)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'flush', array('entity' => $entity), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->flush($entity);
    }

    public function find($className, $id, $lockMode = null, $lockVersion = null)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'find', array('className' => $className, 'id' => $id, 'lockMode' => $lockMode, 'lockVersion' => $lockVersion), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->find($className, $id, $lockMode, $lockVersion);
    }

    public function getReference($entityName, $id)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getReference', array('entityName' => $entityName, 'id' => $id), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getReference($entityName, $id);
    }

    public function getPartialReference($entityName, $identifier)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getPartialReference', array('entityName' => $entityName, 'identifier' => $identifier), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getPartialReference($entityName, $identifier);
    }

    public function clear($entityName = null)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'clear', array('entityName' => $entityName), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->clear($entityName);
    }

    public function close()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'close', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->close();
    }

    public function persist($entity)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'persist', array('entity' => $entity), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->persist($entity);
    }

    public function remove($entity)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'remove', array('entity' => $entity), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->remove($entity);
    }

    public function refresh($entity)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'refresh', array('entity' => $entity), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->refresh($entity);
    }

    public function detach($entity)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'detach', array('entity' => $entity), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->detach($entity);
    }

    public function merge($entity)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'merge', array('entity' => $entity), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->merge($entity);
    }

    public function copy($entity, $deep = false)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'copy', array('entity' => $entity, 'deep' => $deep), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->copy($entity, $deep);
    }

    public function lock($entity, $lockMode, $lockVersion = null)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'lock', array('entity' => $entity, 'lockMode' => $lockMode, 'lockVersion' => $lockVersion), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->lock($entity, $lockMode, $lockVersion);
    }

    public function getRepository($entityName)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getRepository', array('entityName' => $entityName), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getRepository($entityName);
    }

    public function contains($entity)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'contains', array('entity' => $entity), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->contains($entity);
    }

    public function getEventManager()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getEventManager', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getEventManager();
    }

    public function getConfiguration()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getConfiguration', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getConfiguration();
    }

    public function isOpen()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'isOpen', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->isOpen();
    }

    public function getUnitOfWork()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getUnitOfWork', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getUnitOfWork();
    }

    public function getHydrator($hydrationMode)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getHydrator', array('hydrationMode' => $hydrationMode), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getHydrator($hydrationMode);
    }

    public function newHydrator($hydrationMode)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'newHydrator', array('hydrationMode' => $hydrationMode), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->newHydrator($hydrationMode);
    }

    public function getProxyFactory()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getProxyFactory', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getProxyFactory();
    }

    public function initializeObject($obj)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'initializeObject', array('obj' => $obj), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->initializeObject($obj);
    }

    public function getFilters()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'getFilters', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->getFilters();
    }

    public function isFiltersStateClean()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'isFiltersStateClean', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->isFiltersStateClean();
    }

    public function hasFilters()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'hasFilters', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return $this->valueHolderbb136->hasFilters();
    }

    /**
     * Constructor for lazy initialization
     *
     * @param \Closure|null $initializer
     */
    public static function staticProxyConstructor($initializer)
    {
        static $reflection;

        $reflection = $reflection ?? new \ReflectionClass(__CLASS__);
        $instance   = $reflection->newInstanceWithoutConstructor();

        \Closure::bind(function (\Doctrine\ORM\EntityManager $instance) {
            unset($instance->config, $instance->conn, $instance->metadataFactory, $instance->unitOfWork, $instance->eventManager, $instance->proxyFactory, $instance->repositoryFactory, $instance->expressionBuilder, $instance->closed, $instance->filterCollection, $instance->cache);
        }, $instance, 'Doctrine\\ORM\\EntityManager')->__invoke($instance);

        $instance->initializera5538 = $initializer;

        return $instance;
    }

    protected function __construct(\Doctrine\DBAL\Connection $conn, \Doctrine\ORM\Configuration $config, \Doctrine\Common\EventManager $eventManager)
    {
        static $reflection;

        if (! $this->valueHolderbb136) {
            $reflection = $reflection ?? new \ReflectionClass('Doctrine\\ORM\\EntityManager');
            $this->valueHolderbb136 = $reflection->newInstanceWithoutConstructor();
        \Closure::bind(function (\Doctrine\ORM\EntityManager $instance) {
            unset($instance->config, $instance->conn, $instance->metadataFactory, $instance->unitOfWork, $instance->eventManager, $instance->proxyFactory, $instance->repositoryFactory, $instance->expressionBuilder, $instance->closed, $instance->filterCollection, $instance->cache);
        }, $this, 'Doctrine\\ORM\\EntityManager')->__invoke($this);

        }

        $this->valueHolderbb136->__construct($conn, $config, $eventManager);
    }

    public function & __get($name)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, '__get', ['name' => $name], $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        if (isset(self::$publicProperties5f424[$name])) {
            return $this->valueHolderbb136->$name;
        }

        $realInstanceReflection = new \ReflectionClass('Doctrine\\ORM\\EntityManager');

        if (! $realInstanceReflection->hasProperty($name)) {
            $targetObject = $this->valueHolderbb136;

            $backtrace = debug_backtrace(false, 1);
            trigger_error(
                sprintf(
                    'Undefined property: %s::$%s in %s on line %s',
                    $realInstanceReflection->getName(),
                    $name,
                    $backtrace[0]['file'],
                    $backtrace[0]['line']
                ),
                \E_USER_NOTICE
            );
            return $targetObject->$name;
        }

        $targetObject = $this->valueHolderbb136;
        $accessor = function & () use ($targetObject, $name) {
            return $targetObject->$name;
        };
        $backtrace = debug_backtrace(true, 2);
        $scopeObject = isset($backtrace[1]['object']) ? $backtrace[1]['object'] : new \ProxyManager\Stub\EmptyClassStub();
        $accessor = $accessor->bindTo($scopeObject, get_class($scopeObject));
        $returnValue = & $accessor();

        return $returnValue;
    }

    public function __set($name, $value)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, '__set', array('name' => $name, 'value' => $value), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        $realInstanceReflection = new \ReflectionClass('Doctrine\\ORM\\EntityManager');

        if (! $realInstanceReflection->hasProperty($name)) {
            $targetObject = $this->valueHolderbb136;

            $targetObject->$name = $value;

            return $targetObject->$name;
        }

        $targetObject = $this->valueHolderbb136;
        $accessor = function & () use ($targetObject, $name, $value) {
            $targetObject->$name = $value;

            return $targetObject->$name;
        };
        $backtrace = debug_backtrace(true, 2);
        $scopeObject = isset($backtrace[1]['object']) ? $backtrace[1]['object'] : new \ProxyManager\Stub\EmptyClassStub();
        $accessor = $accessor->bindTo($scopeObject, get_class($scopeObject));
        $returnValue = & $accessor();

        return $returnValue;
    }

    public function __isset($name)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, '__isset', array('name' => $name), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        $realInstanceReflection = new \ReflectionClass('Doctrine\\ORM\\EntityManager');

        if (! $realInstanceReflection->hasProperty($name)) {
            $targetObject = $this->valueHolderbb136;

            return isset($targetObject->$name);
        }

        $targetObject = $this->valueHolderbb136;
        $accessor = function () use ($targetObject, $name) {
            return isset($targetObject->$name);
        };
        $backtrace = debug_backtrace(true, 2);
        $scopeObject = isset($backtrace[1]['object']) ? $backtrace[1]['object'] : new \ProxyManager\Stub\EmptyClassStub();
        $accessor = $accessor->bindTo($scopeObject, get_class($scopeObject));
        $returnValue = $accessor();

        return $returnValue;
    }

    public function __unset($name)
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, '__unset', array('name' => $name), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        $realInstanceReflection = new \ReflectionClass('Doctrine\\ORM\\EntityManager');

        if (! $realInstanceReflection->hasProperty($name)) {
            $targetObject = $this->valueHolderbb136;

            unset($targetObject->$name);

            return;
        }

        $targetObject = $this->valueHolderbb136;
        $accessor = function () use ($targetObject, $name) {
            unset($targetObject->$name);

            return;
        };
        $backtrace = debug_backtrace(true, 2);
        $scopeObject = isset($backtrace[1]['object']) ? $backtrace[1]['object'] : new \ProxyManager\Stub\EmptyClassStub();
        $accessor = $accessor->bindTo($scopeObject, get_class($scopeObject));
        $accessor();
    }

    public function __clone()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, '__clone', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        $this->valueHolderbb136 = clone $this->valueHolderbb136;
    }

    public function __sleep()
    {
        $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, '__sleep', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;

        return array('valueHolderbb136');
    }

    public function __wakeup()
    {
        \Closure::bind(function (\Doctrine\ORM\EntityManager $instance) {
            unset($instance->config, $instance->conn, $instance->metadataFactory, $instance->unitOfWork, $instance->eventManager, $instance->proxyFactory, $instance->repositoryFactory, $instance->expressionBuilder, $instance->closed, $instance->filterCollection, $instance->cache);
        }, $this, 'Doctrine\\ORM\\EntityManager')->__invoke($this);
    }

    public function setProxyInitializer(\Closure $initializer = null) : void
    {
        $this->initializera5538 = $initializer;
    }

    public function getProxyInitializer() : ?\Closure
    {
        return $this->initializera5538;
    }

    public function initializeProxy() : bool
    {
        return $this->initializera5538 && ($this->initializera5538->__invoke($valueHolderbb136, $this, 'initializeProxy', array(), $this->initializera5538) || 1) && $this->valueHolderbb136 = $valueHolderbb136;
    }

    public function isProxyInitialized() : bool
    {
        return null !== $this->valueHolderbb136;
    }

    public function getWrappedValueHolderValue()
    {
        return $this->valueHolderbb136;
    }
}

if (!\class_exists('EntityManager_9a5be93', false)) {
    \class_alias(__NAMESPACE__.'\\EntityManager_9a5be93', 'EntityManager_9a5be93', false);
}
