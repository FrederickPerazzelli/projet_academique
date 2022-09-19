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

/* meeting/index.html.twig */
class __TwigTemplate_2afea9cf8e3de772b7efc53391f73066 extends Template
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
        // line 15
        return "base.html.twig";
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "meeting/index.html.twig"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "meeting/index.html.twig"));

        $this->parent = $this->loadTemplate("base.html.twig", "meeting/index.html.twig", 15);
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
 Auteur : Frédérick Perazzelli-Delorme
 Fonctionnalité : A5
 Date : 2022-04-21
 Vérification :
 Date Nom Approuvé
 =========================================================
 Historique de modifications :
 =========================================================
****************************************-->
";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    // line 17
    public function block_title($context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "title"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "title"));

        echo "Gestion des recontres";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    // line 19
    public function block_body($context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "body"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "body"));

        // line 20
        echo "    <!--===================== CSS =====================-->
    <style>
        table
        {
            border-collapse: collapse;
        }
        button 
        {
            margin: 5px 0px;
        }
        a
        {
            text-decoration: none;
        }
        tr 
        {
            border: solid thin;
        }
        th 
        {
            height: 30pt;
            background-color: #e34958;
            color: white;
        }
        th, td
        {
            text-align: center;
        }
        table tr:not([hidden]):nth-child(odd) td
        {
            background-color: #d6d6d6;
        }
        img 
        {
            object-fit: cover;
            border-radius: 50%;
            height: 50pt;
            width: 50pt;
            border: solid 2px;
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
        .flex-row 
        {
            display: flex;
            flex-direction: row;
        }
        .flex-column 
        {
            display: flex;
            flex-direction: column;
        }
        #searchFilter {
            width: 100pt;
        }
        #userOptions {
            margin-left: 15pt;
        }
    </style>

    <!--===================== HTML =====================-->
    ";
        // line 96
        $this->loadTemplate("header.html.twig", "meeting/index.html.twig", 96)->display($context);
        // line 97
        echo "    <h1>Historique des Rencontres</h1>
    <div class=\"flex-row\">
        <button id=\"filterButton\" class=\"btn btn-light\">Filtrer <i class=\"arrow down\" id=\"filterArrow\"></i></button>
    </div>
    <div id=\"filters\" hidden>
        <div class=\"flex-row\">
            <div class=\"flex-column\">
                <b>Status</b>
                <div>
                    <input class=\"statusFilter\" type=\"checkbox\" id=\"statusFilterTrue\" name=\"statusFilterTrue\" value=\"Accepté\"/>
                    <label for=\"statusFilterTrue\">Accepté</label>
                </div>
                <div>
                    <input class=\"statusFilter\" type=\"checkbox\" id=\"statusFilterFalse\" name=\"statusFilterFalse\" value=\"Refusé\"/>
                    <label for=\"statusFilterFalse\">Refusé</label>
                </div>
                <div>
                    <input class=\"statusFilter\" type=\"checkbox\" id=\"statusFilterFalse\" name=\"statusFilterFalse\" value=\"En attente\"/>
                    <label for=\"statusFilterFalse\">En attente</label>
                </div>
            </div>
        </div>
        <button id=\"applyButton\" class=\"btn btn-primary\">Appliquer</button>
    </div>
    <table class=\"displayTable col-15 auto\">
        <tr>
            <th class=\"col-1\"></th>
            <th class=\"col-2\">Motive</th>
            <th class=\"col-2\">Etudiant </th>
            <th class=\"col-2\">Tuteur </th>
            <th class=\"col-2\">Date</th>
            <th class=\"col-2\">Heure</th>
            <th class=\"col-2\">Location</th>
            <th class=\"col-2\">Status</th>
        </tr>
        ";
        // line 132
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable((isset($context["meetings"]) || array_key_exists("meetings", $context) ? $context["meetings"] : (function () { throw new RuntimeError('Variable "meetings" does not exist.', 132, $this->source); })()));
        foreach ($context['_seq'] as $context["_key"] => $context["meeting"]) {
            // line 133
            echo "            <tr class=\"tableRow\">
                <td><input class=\"selectUser\" type=\"checkbox\" id=\"select";
            // line 134
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["meeting"], "id", [], "any", false, false, false, 134), "html", null, true);
            echo "\" name=\"select";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["meeting"], "id", [], "any", false, false, false, 134), "html", null, true);
            echo "\"></td>
                <td> <a href=\"/meeting/";
            // line 135
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["meeting"], "id", [], "any", false, false, false, 135), "html", null, true);
            echo "\" class=\"Motive\"> ";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["meeting"], "motive", [], "any", false, false, false, 135), "html", null, true);
            echo " </a> </td> 
                <td class=\"student\">";
            // line 136
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["meeting"], "student", [], "any", false, false, false, 136), "email", [], "any", false, false, false, 136), "html", null, true);
            echo "</td>
                <td class=\"tutor\">";
            // line 137
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["meeting"], "tutor", [], "any", false, false, false, 137), "email", [], "any", false, false, false, 137), "html", null, true);
            echo "</td>
                <td class=\"date\" >";
            // line 138
            echo twig_escape_filter($this->env, twig_date_format_filter($this->env, twig_get_attribute($this->env, $this->source, $context["meeting"], "date", [], "any", false, false, false, 138), "Y-m-d"), "html", null, true);
            echo "</td>
                <td class=\"heure\">";
            // line 139
            echo twig_escape_filter($this->env, twig_date_format_filter($this->env, twig_get_attribute($this->env, $this->source, $context["meeting"], "meetingTime", [], "any", false, false, false, 139), "h:i:sa"), "html", null, true);
            echo "</td>
                <td class=\"location\">";
            // line 140
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["meeting"], "location", [], "any", false, false, false, 140), "html", null, true);
            echo " </td>
                <td class=\"status\">";
            // line 141
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["meeting"], "status", [], "any", false, false, false, 141), "name", [], "any", false, false, false, 141), "html", null, true);
            echo "</td>       
            </tr>
        ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['meeting'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 144
        echo "    </table>
    ";
        // line 145
        $this->loadTemplate("footer.html.twig", "meeting/index.html.twig", 145)->display($context);
        // line 146
        echo "
    <!--===================== JavaScript =====================-->
    <script async defer>
        let filterButton = document.getElementById('filterButton');
        filterButton.addEventListener('click', function()
        {
            let filterDiv = document.getElementById('filters');
            let arrow = document.getElementById('filterArrow');
            arrow.classList.toggle('up');
            arrow.classList.toggle('down');
            filterDiv.toggleAttribute('hidden');
        });

        let applyButton = document.getElementById('applyButton');
        applyButton.addEventListener('click', function()
        {
            let tableRows = document.getElementsByClassName('tableRow');
            let statusFilters = document.getElementsByClassName('statusFilter');
            
            let  statusArray = [];

            for (let af of statusFilters) {
                if (af.checked)
                    statusArray.push(af.value);
            }
            // Apply filters
            for (let tr of tableRows)
            {
                tr.removeAttribute('hidden');
                if (statusArray.length > 0) 
                {
                    let status = tr.querySelector('.status');
                    if (!statusArray.includes(status.innerHTML))
                        tr.setAttribute('hidden', '');
                }
            }
        });

        
    </script>
";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    public function getTemplateName()
    {
        return "meeting/index.html.twig";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  290 => 146,  288 => 145,  285 => 144,  276 => 141,  272 => 140,  268 => 139,  264 => 138,  260 => 137,  256 => 136,  250 => 135,  244 => 134,  241 => 133,  237 => 132,  200 => 97,  198 => 96,  120 => 20,  110 => 19,  91 => 17,  70 => 2,  60 => 1,  37 => 15,);
    }

    public function getSourceContext()
    {
        return new Source("{% block header %}
<!--****************************************
 Fichier : index.html.twig
 Auteur : Frédérick Perazzelli-Delorme
 Fonctionnalité : A5
 Date : 2022-04-21
 Vérification :
 Date Nom Approuvé
 =========================================================
 Historique de modifications :
 =========================================================
****************************************-->
{% endblock %}

{% extends 'base.html.twig' %}

{% block title %}Gestion des recontres{% endblock %}

{% block body %}
    <!--===================== CSS =====================-->
    <style>
        table
        {
            border-collapse: collapse;
        }
        button 
        {
            margin: 5px 0px;
        }
        a
        {
            text-decoration: none;
        }
        tr 
        {
            border: solid thin;
        }
        th 
        {
            height: 30pt;
            background-color: #e34958;
            color: white;
        }
        th, td
        {
            text-align: center;
        }
        table tr:not([hidden]):nth-child(odd) td
        {
            background-color: #d6d6d6;
        }
        img 
        {
            object-fit: cover;
            border-radius: 50%;
            height: 50pt;
            width: 50pt;
            border: solid 2px;
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
        .flex-row 
        {
            display: flex;
            flex-direction: row;
        }
        .flex-column 
        {
            display: flex;
            flex-direction: column;
        }
        #searchFilter {
            width: 100pt;
        }
        #userOptions {
            margin-left: 15pt;
        }
    </style>

    <!--===================== HTML =====================-->
    {% include 'header.html.twig' %}
    <h1>Historique des Rencontres</h1>
    <div class=\"flex-row\">
        <button id=\"filterButton\" class=\"btn btn-light\">Filtrer <i class=\"arrow down\" id=\"filterArrow\"></i></button>
    </div>
    <div id=\"filters\" hidden>
        <div class=\"flex-row\">
            <div class=\"flex-column\">
                <b>Status</b>
                <div>
                    <input class=\"statusFilter\" type=\"checkbox\" id=\"statusFilterTrue\" name=\"statusFilterTrue\" value=\"Accepté\"/>
                    <label for=\"statusFilterTrue\">Accepté</label>
                </div>
                <div>
                    <input class=\"statusFilter\" type=\"checkbox\" id=\"statusFilterFalse\" name=\"statusFilterFalse\" value=\"Refusé\"/>
                    <label for=\"statusFilterFalse\">Refusé</label>
                </div>
                <div>
                    <input class=\"statusFilter\" type=\"checkbox\" id=\"statusFilterFalse\" name=\"statusFilterFalse\" value=\"En attente\"/>
                    <label for=\"statusFilterFalse\">En attente</label>
                </div>
            </div>
        </div>
        <button id=\"applyButton\" class=\"btn btn-primary\">Appliquer</button>
    </div>
    <table class=\"displayTable col-15 auto\">
        <tr>
            <th class=\"col-1\"></th>
            <th class=\"col-2\">Motive</th>
            <th class=\"col-2\">Etudiant </th>
            <th class=\"col-2\">Tuteur </th>
            <th class=\"col-2\">Date</th>
            <th class=\"col-2\">Heure</th>
            <th class=\"col-2\">Location</th>
            <th class=\"col-2\">Status</th>
        </tr>
        {% for meeting in meetings %}
            <tr class=\"tableRow\">
                <td><input class=\"selectUser\" type=\"checkbox\" id=\"select{{ meeting.id }}\" name=\"select{{ meeting.id }}\"></td>
                <td> <a href=\"/meeting/{{ meeting.id }}\" class=\"Motive\"> {{ meeting.motive}} </a> </td> 
                <td class=\"student\">{{ meeting.student.email }}</td>
                <td class=\"tutor\">{{ meeting.tutor.email }}</td>
                <td class=\"date\" >{{ meeting.date|date('Y-m-d') }}</td>
                <td class=\"heure\">{{ meeting.meetingTime|date('h:i:sa') }}</td>
                <td class=\"location\">{{ meeting.location }} </td>
                <td class=\"status\">{{ meeting.status.name}}</td>       
            </tr>
        {% endfor %}
    </table>
    {% include 'footer.html.twig' %}

    <!--===================== JavaScript =====================-->
    <script async defer>
        let filterButton = document.getElementById('filterButton');
        filterButton.addEventListener('click', function()
        {
            let filterDiv = document.getElementById('filters');
            let arrow = document.getElementById('filterArrow');
            arrow.classList.toggle('up');
            arrow.classList.toggle('down');
            filterDiv.toggleAttribute('hidden');
        });

        let applyButton = document.getElementById('applyButton');
        applyButton.addEventListener('click', function()
        {
            let tableRows = document.getElementsByClassName('tableRow');
            let statusFilters = document.getElementsByClassName('statusFilter');
            
            let  statusArray = [];

            for (let af of statusFilters) {
                if (af.checked)
                    statusArray.push(af.value);
            }
            // Apply filters
            for (let tr of tableRows)
            {
                tr.removeAttribute('hidden');
                if (statusArray.length > 0) 
                {
                    let status = tr.querySelector('.status');
                    if (!statusArray.includes(status.innerHTML))
                        tr.setAttribute('hidden', '');
                }
            }
        });

        
    </script>
{% endblock %}", "meeting/index.html.twig", "C:\\xampp\\htdocs\\projetWebTuteur\\templates\\meeting\\index.html.twig");
    }
}
