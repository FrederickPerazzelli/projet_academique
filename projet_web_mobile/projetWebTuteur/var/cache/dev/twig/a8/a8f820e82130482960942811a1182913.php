<?php

use Twig\Environment;
use Twig\Error\LoaderError;
use Twig\Error\RuntimeError;
use Twig\Extension\SandboxExtension;
use Twig\Markup;
use Twig\Sandbox\SecurityError;
use Twig\Sandbox\SecurityNotAllowedTagError;
use Twig\Sandbox\SecurityNotAllowedFilterError;
use Twig\Sandbox\SecurityNotAllowedFunctionError;
use Twig\Source;
use Twig\Template;

/* demand/index.html.twig */
class __TwigTemplate_cbe513967df32a32a03533e185e40838 extends Template
{
    private $source;
    private $macros = [];

    public function __construct(Environment $env)
    {
        parent::__construct($env);

        $this->source = $this->getSourceContext();

        $this->blocks = [
            'header' => [$this, 'block_header'],
            'title' => [$this, 'block_title'],
            'body' => [$this, 'block_body'],
        ];
    }

    protected function doGetParent(array $context)
    {
        // line 16
        return "base.html.twig";
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "demand/index.html.twig"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "demand/index.html.twig"));

        $this->parent = $this->loadTemplate("base.html.twig", "demand/index.html.twig", 16);
        $this->parent->display($context, array_merge($this->blocks, $blocks));
        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

    }

    // line 1
    public function block_header($context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "header"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "header"));

        // line 2
        echo "<!--****************************************
 Fichier : index.html.twig
 Auteur : Jean-Nyckolas Roy
 Fonctionnalité : A12
 Date : 2022-04-27
 Vérification :
 Date Nom Approuvé
 =========================================================
 Historique de modifications :
 2022-04-27 - Jean-Nyckolas - Affichage de base et ajout des filtres
 =========================================================
****************************************-->
";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    // line 18
    public function block_title($context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "title"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "title"));

        echo "Demandes d'aide";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    // line 20
    public function block_body($context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "body"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "body"));

        // line 21
        echo "    ";
        if (( !twig_get_attribute($this->env, $this->source, (isset($context["app"]) || array_key_exists("app", $context) ? $context["app"] : (function () { throw new RuntimeError('Variable "app" does not exist.', 21, $this->source); })()), "user", [], "any", false, false, false, 21) || !twig_in_filter(twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, (isset($context["app"]) || array_key_exists("app", $context) ? $context["app"] : (function () { throw new RuntimeError('Variable "app" does not exist.', 21, $this->source); })()), "user", [], "any", false, false, false, 21), "role", [], "any", false, false, false, 21), "id", [], "any", false, false, false, 21), [0 => 1, 1 => 3]))) {
            // line 22
            echo "        <script>window.location.href = \"/login\";</script>
    ";
        }
        // line 24
        echo "    <style>
        img 
        {
            object-fit: cover;
            border-radius: 50%;
            height: 50pt;
            width: 50pt;
            border: solid 2px;
        }
        a
        {
            text-decoration: none;
        }
        .arrow 
        {
            border: solid black;
            border-width: 0 3px 3px 0;
            display: inline-block;
            padding: 3px;
        }
        .up 
        {
            transform: rotate(-135deg);
            -webkit-transform: rotate(-135deg);
        }
        .down 
        {
            transform: rotate(45deg);
            -webkit-transform: rotate(45deg);
        }

        .demand
        {
            border: solid 1px #d4d4d4;
            padding: 10pt 10pt;
        }

        #mainDiv
        {
            border-collapse: collapse;
        }
    </style>
    ";
        // line 66
        $this->loadTemplate("header.html.twig", "demand/index.html.twig", 66)->display($context);
        // line 67
        echo "    <h1>Demandes</h1>
    <button id=\"filterButton\" class=\"btn btn-light\">Filtrer <i class=\"arrow down\" id=\"filterArrow\"></i></button>
    <div id=\"filters\" hidden>
        <div class=\"flex-row\">
            <div class=\"flex-column\">
                <b>Statut</b>
                ";
        // line 73
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable((isset($context["status"]) || array_key_exists("status", $context) ? $context["status"] : (function () { throw new RuntimeError('Variable "status" does not exist.', 73, $this->source); })()));
        foreach ($context['_seq'] as $context["_key"] => $context["state"]) {
            // line 74
            echo "                    <div>
                        <input class=\"statusFilter\" type=\"checkbox\" id=\"statusFilter";
            // line 75
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["state"], "id", [], "any", false, false, false, 75), "html", null, true);
            echo "\" name=\"statusFilter";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["state"], "id", [], "any", false, false, false, 75), "html", null, true);
            echo "\" value=\"";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["state"], "name", [], "any", false, false, false, 75), "html", null, true);
            echo "\"/>
                        <label for=\"statusFilter";
            // line 76
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["state"], "id", [], "any", false, false, false, 76), "html", null, true);
            echo "\">";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["state"], "name", [], "any", false, false, false, 76), "html", null, true);
            echo "</label>
                    </div>
                ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['state'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 79
        echo "            </div>
            <div class=\"flex-column\">
                <b>Catégorie</b>
                <select id=\"categoryFilter\">
                    <option value=\"0\">Toutes</option>
                    ";
        // line 84
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable((isset($context["categories"]) || array_key_exists("categories", $context) ? $context["categories"] : (function () { throw new RuntimeError('Variable "categories" does not exist.', 84, $this->source); })()));
        foreach ($context['_seq'] as $context["_key"] => $context["c"]) {
            // line 85
            echo "                        <option value=\"";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["c"], "name", [], "any", false, false, false, 85), "html", null, true);
            echo "\">";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["c"], "name", [], "any", false, false, false, 85), "html", null, true);
            echo "</option>
                    ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['c'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 87
        echo "                </select>
            </div>
            <div class=\"flex-column\">
                <b>Rechercher</b>
                <input type=\"text\" id=\"searchFilter\" name=\"searchFilter\"/>
            </div>
        </div>
        <button id=\"applyButton\" class=\"btn btn-primary\">Appliquer</button>
    </div>
    <div id=\"mainDiv\" class=\"flex-column\">
        ";
        // line 97
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable((isset($context["demands"]) || array_key_exists("demands", $context) ? $context["demands"] : (function () { throw new RuntimeError('Variable "demands" does not exist.', 97, $this->source); })()));
        foreach ($context['_seq'] as $context["_key"] => $context["d"]) {
            // line 98
            echo "            <div class=\"demand\">
                <div class=\"flex-row\">
                    <h4>
                    <a href=\"demand/";
            // line 101
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["d"], "id", [], "any", false, false, false, 101), "html", null, true);
            echo "\" class=\"title\">";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["d"], "title", [], "any", false, false, false, 101), "html", null, true);
            echo "</a>
                    ";
            // line 102
            if ((twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["d"], "status", [], "any", false, false, false, 102), "id", [], "any", false, false, false, 102) == 10)) {
                // line 103
                echo "                        <span value=\"";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["d"], "status", [], "any", false, false, false, 103), "id", [], "any", false, false, false, 103), "html", null, true);
                echo "\" class=\"badge bg-success status\">";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["d"], "status", [], "any", false, false, false, 103), "name", [], "any", false, false, false, 103), "html", null, true);
                echo "</span>
                    ";
            } else {
                // line 105
                echo "                        <span value=\"";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["d"], "status", [], "any", false, false, false, 105), "id", [], "any", false, false, false, 105), "html", null, true);
                echo "\" class=\"badge bg-warning text-dark status\">";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["d"], "status", [], "any", false, false, false, 105), "name", [], "any", false, false, false, 105), "html", null, true);
                echo "</span>
                    ";
            }
            // line 107
            echo "                    </h4>
                </div>
                <p class=\"comment\">";
            // line 109
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["d"], "comments", [], "any", false, false, false, 109), "html", null, true);
            echo "</p>
                <hr>
                <div class=\"flex-row\">
                    <span class=\"badge rounded-pill bg-primary category\">";
            // line 112
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["d"], "category", [], "any", false, false, false, 112), "name", [], "any", false, false, false, 112), "html", null, true);
            echo "</span>
                    <span class=\"right\">Écrit par ";
            // line 113
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["d"], "user", [], "any", false, false, false, 113), "firstName", [], "any", false, false, false, 113), "html", null, true);
            echo " ";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["d"], "user", [], "any", false, false, false, 113), "lastName", [], "any", false, false, false, 113), "html", null, true);
            echo " le ";
            echo twig_escape_filter($this->env, twig_date_format_filter($this->env, twig_get_attribute($this->env, $this->source, $context["d"], "publishDate", [], "any", false, false, false, 113), "d-m-Y"), "html", null, true);
            echo "</span>
                </div>
            </div>
        ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['d'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 117
        echo "    </div>
    ";
        // line 118
        $this->loadTemplate("footer.html.twig", "demand/index.html.twig", 118)->display($context);
        // line 119
        echo "    <script>
        let applyButton = document.getElementById('applyButton');
        applyButton.addEventListener('click', function()
        {
            let demands = document.getElementsByClassName('demand');

            let statusFilters = document.getElementsByClassName('statusFilter');
            let categoryFilter = document.getElementById('categoryFilter').value;
            let searchFilter = document.getElementById('searchFilter').value;

            let statusArray = [];

            // Check for filters selected
            for (let sf of statusFilters) 
            {
                if (sf.checked)
                    statusArray.push(sf.value);
            }

            // Apply filters
            for (let d of demands)
            {
                d.removeAttribute('hidden');
                if (statusArray.length > 0)
                {
                    let state = d.querySelector('.status').innerHTML;
                    if (!statusArray.includes(state))
                        d.setAttribute('hidden', '');
                }

                if (categoryFilter != 0) 
                {
                    let category = d.querySelector('.category').innerHTML;
                    if (categoryFilter != category)
                        d.setAttribute('hidden', '');
                }

                if (searchFilter != '') 
                {
                    let title = d.querySelector('.comment').innerHTML.toLowerCase();
                    let comment = d.querySelector('.title').innerHTML.toLowerCase();
                    if (!title.includes(searchFilter.toLowerCase()) && !comment.includes(searchFilter.toLowerCase()))
                        d.setAttribute('hidden', '');
                }
            }
        });

        let filterButton = document.getElementById('filterButton');
        filterButton.addEventListener('click', function()
        {
            let filterDiv = document.getElementById('filters');
            let arrow = document.getElementById('filterArrow');

            arrow.classList.toggle('up');
            arrow.classList.toggle('down');
            filterDiv.toggleAttribute('hidden');
        });
    </script>
";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    public function getTemplateName()
    {
        return "demand/index.html.twig";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  308 => 119,  306 => 118,  303 => 117,  289 => 113,  285 => 112,  279 => 109,  275 => 107,  267 => 105,  259 => 103,  257 => 102,  251 => 101,  246 => 98,  242 => 97,  230 => 87,  219 => 85,  215 => 84,  208 => 79,  197 => 76,  189 => 75,  186 => 74,  182 => 73,  174 => 67,  172 => 66,  128 => 24,  124 => 22,  121 => 21,  111 => 20,  92 => 18,  70 => 2,  60 => 1,  37 => 16,);
    }

    public function getSourceContext()
    {
        return new Source("{% block header %}
<!--****************************************
 Fichier : index.html.twig
 Auteur : Jean-Nyckolas Roy
 Fonctionnalité : A12
 Date : 2022-04-27
 Vérification :
 Date Nom Approuvé
 =========================================================
 Historique de modifications :
 2022-04-27 - Jean-Nyckolas - Affichage de base et ajout des filtres
 =========================================================
****************************************-->
{% endblock %}

{% extends 'base.html.twig' %}

{% block title %}Demandes d'aide{% endblock %}

{% block body %}
    {% if not app.user or app.user.role.id not in [1, 3] %}
        <script>window.location.href = \"/login\";</script>
    {% endif %}
    <style>
        img 
        {
            object-fit: cover;
            border-radius: 50%;
            height: 50pt;
            width: 50pt;
            border: solid 2px;
        }
        a
        {
            text-decoration: none;
        }
        .arrow 
        {
            border: solid black;
            border-width: 0 3px 3px 0;
            display: inline-block;
            padding: 3px;
        }
        .up 
        {
            transform: rotate(-135deg);
            -webkit-transform: rotate(-135deg);
        }
        .down 
        {
            transform: rotate(45deg);
            -webkit-transform: rotate(45deg);
        }

        .demand
        {
            border: solid 1px #d4d4d4;
            padding: 10pt 10pt;
        }

        #mainDiv
        {
            border-collapse: collapse;
        }
    </style>
    {% include 'header.html.twig' %}
    <h1>Demandes</h1>
    <button id=\"filterButton\" class=\"btn btn-light\">Filtrer <i class=\"arrow down\" id=\"filterArrow\"></i></button>
    <div id=\"filters\" hidden>
        <div class=\"flex-row\">
            <div class=\"flex-column\">
                <b>Statut</b>
                {% for state in status %}
                    <div>
                        <input class=\"statusFilter\" type=\"checkbox\" id=\"statusFilter{{ state.id }}\" name=\"statusFilter{{ state.id }}\" value=\"{{ state.name }}\"/>
                        <label for=\"statusFilter{{ state.id }}\">{{ state.name }}</label>
                    </div>
                {% endfor %}
            </div>
            <div class=\"flex-column\">
                <b>Catégorie</b>
                <select id=\"categoryFilter\">
                    <option value=\"0\">Toutes</option>
                    {% for c in categories %}
                        <option value=\"{{ c.name }}\">{{ c.name }}</option>
                    {% endfor %}
                </select>
            </div>
            <div class=\"flex-column\">
                <b>Rechercher</b>
                <input type=\"text\" id=\"searchFilter\" name=\"searchFilter\"/>
            </div>
        </div>
        <button id=\"applyButton\" class=\"btn btn-primary\">Appliquer</button>
    </div>
    <div id=\"mainDiv\" class=\"flex-column\">
        {% for d in demands %}
            <div class=\"demand\">
                <div class=\"flex-row\">
                    <h4>
                    <a href=\"demand/{{ d.id }}\" class=\"title\">{{ d.title }}</a>
                    {% if d.status.id == 10 %}
                        <span value=\"{{ d.status.id }}\" class=\"badge bg-success status\">{{ d.status.name }}</span>
                    {% else %}
                        <span value=\"{{ d.status.id }}\" class=\"badge bg-warning text-dark status\">{{ d.status.name }}</span>
                    {% endif %}
                    </h4>
                </div>
                <p class=\"comment\">{{ d.comments }}</p>
                <hr>
                <div class=\"flex-row\">
                    <span class=\"badge rounded-pill bg-primary category\">{{ d.category.name }}</span>
                    <span class=\"right\">Écrit par {{ d.user.firstName }} {{ d.user.lastName }} le {{ d.publishDate|date('d-m-Y') }}</span>
                </div>
            </div>
        {% endfor %}
    </div>
    {% include 'footer.html.twig' %}
    <script>
        let applyButton = document.getElementById('applyButton');
        applyButton.addEventListener('click', function()
        {
            let demands = document.getElementsByClassName('demand');

            let statusFilters = document.getElementsByClassName('statusFilter');
            let categoryFilter = document.getElementById('categoryFilter').value;
            let searchFilter = document.getElementById('searchFilter').value;

            let statusArray = [];

            // Check for filters selected
            for (let sf of statusFilters) 
            {
                if (sf.checked)
                    statusArray.push(sf.value);
            }

            // Apply filters
            for (let d of demands)
            {
                d.removeAttribute('hidden');
                if (statusArray.length > 0)
                {
                    let state = d.querySelector('.status').innerHTML;
                    if (!statusArray.includes(state))
                        d.setAttribute('hidden', '');
                }

                if (categoryFilter != 0) 
                {
                    let category = d.querySelector('.category').innerHTML;
                    if (categoryFilter != category)
                        d.setAttribute('hidden', '');
                }

                if (searchFilter != '') 
                {
                    let title = d.querySelector('.comment').innerHTML.toLowerCase();
                    let comment = d.querySelector('.title').innerHTML.toLowerCase();
                    if (!title.includes(searchFilter.toLowerCase()) && !comment.includes(searchFilter.toLowerCase()))
                        d.setAttribute('hidden', '');
                }
            }
        });

        let filterButton = document.getElementById('filterButton');
        filterButton.addEventListener('click', function()
        {
            let filterDiv = document.getElementById('filters');
            let arrow = document.getElementById('filterArrow');

            arrow.classList.toggle('up');
            arrow.classList.toggle('down');
            filterDiv.toggleAttribute('hidden');
        });
    </script>
{% endblock %}
", "demand/index.html.twig", "C:\\xampp\\htdocs\\projetWebTuteur\\templates\\demand\\index.html.twig");
    }
}
