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

/* demand/demand.html.twig */
class __TwigTemplate_c398a66abfe61423b7e79c56f8039f1c extends Template
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
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "demand/demand.html.twig"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "demand/demand.html.twig"));

        $this->parent = $this->loadTemplate("base.html.twig", "demand/demand.html.twig", 16);
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

        echo "Demande";
        
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
        button
        {
            width: fit-content;
        }
    </style>
    ";
        // line 42
        $this->loadTemplate("header.html.twig", "demand/demand.html.twig", 42)->display($context);
        // line 43
        echo "    <h1>";
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, (isset($context["demand"]) || array_key_exists("demand", $context) ? $context["demand"] : (function () { throw new RuntimeError('Variable "demand" does not exist.', 43, $this->source); })()), "title", [], "any", false, false, false, 43), "html", null, true);
        echo "</h1>
    <span class=\"badge rounded-pill bg-primary category\">";
        // line 44
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, (isset($context["demand"]) || array_key_exists("demand", $context) ? $context["demand"] : (function () { throw new RuntimeError('Variable "demand" does not exist.', 44, $this->source); })()), "category", [], "any", false, false, false, 44), "name", [], "any", false, false, false, 44), "html", null, true);
        echo " - ";
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, (isset($context["demand"]) || array_key_exists("demand", $context) ? $context["demand"] : (function () { throw new RuntimeError('Variable "demand" does not exist.', 44, $this->source); })()), "subject", [], "any", false, false, false, 44), "html", null, true);
        echo "</span>
    <span><b>";
        // line 45
        echo twig_escape_filter($this->env, twig_length_filter($this->env, (isset($context["answers"]) || array_key_exists("answers", $context) ? $context["answers"] : (function () { throw new RuntimeError('Variable "answers" does not exist.', 45, $this->source); })())), "html", null, true);
        echo " réponse(s) -</b></span>
    <span class=\"right\">Écrit par ";
        // line 46
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, (isset($context["demand"]) || array_key_exists("demand", $context) ? $context["demand"] : (function () { throw new RuntimeError('Variable "demand" does not exist.', 46, $this->source); })()), "user", [], "any", false, false, false, 46), "firstName", [], "any", false, false, false, 46), "html", null, true);
        echo " ";
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, (isset($context["demand"]) || array_key_exists("demand", $context) ? $context["demand"] : (function () { throw new RuntimeError('Variable "demand" does not exist.', 46, $this->source); })()), "user", [], "any", false, false, false, 46), "lastName", [], "any", false, false, false, 46), "html", null, true);
        echo "  le ";
        echo twig_escape_filter($this->env, twig_date_format_filter($this->env, twig_get_attribute($this->env, $this->source, (isset($context["demand"]) || array_key_exists("demand", $context) ? $context["demand"] : (function () { throw new RuntimeError('Variable "demand" does not exist.', 46, $this->source); })()), "publishDate", [], "any", false, false, false, 46), "d-m-Y"), "html", null, true);
        echo "</span>
    <hr>
    <div class=\"flex-row\">
        <div class=\"flex-column col-6\" id=\"answerFeed\">
            ";
        // line 50
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, (isset($context["demand"]) || array_key_exists("demand", $context) ? $context["demand"] : (function () { throw new RuntimeError('Variable "demand" does not exist.', 50, $this->source); })()), "comments", [], "any", false, false, false, 50), "html", null, true);
        echo "
            <hr>
            ";
        // line 52
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable((isset($context["answers"]) || array_key_exists("answers", $context) ? $context["answers"] : (function () { throw new RuntimeError('Variable "answers" does not exist.', 52, $this->source); })()));
        foreach ($context['_seq'] as $context["_key"] => $context["a"]) {
            // line 53
            echo "                <p>
                    <!-- Modifier pour vérifier le rôle de l'utilisateur -->
                    ";
            // line 55
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["a"], "comments", [], "any", false, false, false, 55), "html", null, true);
            echo " - 
                    ";
            // line 56
            if (true) {
                // line 57
                echo "                        <a href=\"/profile/";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["a"], "user", [], "any", false, false, false, 57), "id", [], "any", false, false, false, 57), "html", null, true);
                echo "\">";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["a"], "user", [], "any", false, false, false, 57), "firstName", [], "any", false, false, false, 57), "html", null, true);
                echo " ";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["a"], "user", [], "any", false, false, false, 57), "lastName", [], "any", false, false, false, 57), "html", null, true);
                echo "</a>
                    ";
            } else {
                // line 59
                echo "                        ";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["a"], "user", [], "any", false, false, false, 59), "firstName", [], "any", false, false, false, 59), "html", null, true);
                echo " ";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["a"], "user", [], "any", false, false, false, 59), "lastName", [], "any", false, false, false, 59), "html", null, true);
                echo "
                    ";
            }
            // line 61
            echo "                    <span class=\"form-text\">";
            echo twig_escape_filter($this->env, twig_date_format_filter($this->env, twig_get_attribute($this->env, $this->source, $context["a"], "answerDate", [], "any", false, false, false, 61), "Y-m-d"), "html", null, true);
            echo "</span>
                </p>
                <hr>
            ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['a'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 65
        echo "            <textarea id=\"commentArea\" class=\"form-control\" hidden></textarea>
            <div id=\"commentDiv\" class=\"flex-row\" hidden>
                <button id=\"cancelButton\" type=\"button\" class=\"btn btn-link\">Annuler</button>
                <button id=\"sendButton\" type=\"button\" class=\"btn btn-link\">Envoyer</button>
            </div>
            <button id=\"commentButton\" type=\"button\" class=\"btn btn-link\">Ajouter un commentaire</button>
        </div>
        <fieldset class=\"col-4 right\">
            <legend>Autres demandes en ";
        // line 73
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, (isset($context["demand"]) || array_key_exists("demand", $context) ? $context["demand"] : (function () { throw new RuntimeError('Variable "demand" does not exist.', 73, $this->source); })()), "category", [], "any", false, false, false, 73), "name", [], "any", false, false, false, 73), "html", null, true);
        echo "</legend>
            ";
        // line 74
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable(twig_array_filter($this->env, (isset($context["sameSubject"]) || array_key_exists("sameSubject", $context) ? $context["sameSubject"] : (function () { throw new RuntimeError('Variable "sameSubject" does not exist.', 74, $this->source); })()), function ($__suggestion__) use ($context, $macros) { $context["suggestion"] = $__suggestion__; return (twig_get_attribute($this->env, $this->source, $context["suggestion"], "id", [], "any", false, false, false, 74) != twig_get_attribute($this->env, $this->source, (isset($context["demand"]) || array_key_exists("demand", $context) ? $context["demand"] : (function () { throw new RuntimeError('Variable "demand" does not exist.', 74, $this->source); })()), "id", [], "any", false, false, false, 74)); }));
        foreach ($context['_seq'] as $context["_key"] => $context["suggestion"]) {
            // line 75
            echo "                <a href=\"/demand/";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["suggestion"], "id", [], "any", false, false, false, 75), "html", null, true);
            echo "\">";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["suggestion"], "title", [], "any", false, false, false, 75), "html", null, true);
            echo "</a>
            ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['suggestion'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 77
        echo "        </fieldset>
    </div>
    ";
        // line 79
        $this->loadTemplate("footer.html.twig", "demand/demand.html.twig", 79)->display($context);
        // line 80
        echo "    <script>
        let commentArea = document.getElementById('commentArea');
        let commentDiv = document.getElementById('commentDiv');
        let cancelButton = document.getElementById('cancelButton');
        let sendButton = document.getElementById('sendButton');
        let commentButton = document.getElementById('commentButton');

        cancelButton.addEventListener('click', function()
        {
            commentDiv.setAttribute('hidden', '');
            commentArea.value = '';
            commentButton.removeAttribute('hidden');
            commentArea.setAttribute('hidden', '');
        });

        commentButton.addEventListener('click', function()
        {
            commentButton.setAttribute('hidden', '');
            commentArea.removeAttribute('hidden');
            commentDiv.removeAttribute('hidden');
        });

        sendButton.addEventListener('click', function()
        {
            if (commentArea.value != '') 
            {
                addComment(";
        // line 106
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, (isset($context["demand"]) || array_key_exists("demand", $context) ? $context["demand"] : (function () { throw new RuntimeError('Variable "demand" does not exist.', 106, $this->source); })()), "id", [], "any", false, false, false, 106), "html", null, true);
        echo ", ";
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, (isset($context["app"]) || array_key_exists("app", $context) ? $context["app"] : (function () { throw new RuntimeError('Variable "app" does not exist.', 106, $this->source); })()), "user", [], "any", false, false, false, 106), "id", [], "any", false, false, false, 106), "html", null, true);
        echo ", commentArea.value);

                window.location.href = '/demand/' + ";
        // line 108
        echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, (isset($context["demand"]) || array_key_exists("demand", $context) ? $context["demand"] : (function () { throw new RuntimeError('Variable "demand" does not exist.', 108, $this->source); })()), "id", [], "any", false, false, false, 108), "html", null, true);
        echo ";
            }
        });

        /***** Requêtes AJAX *****/
        async function addComment(demand, user, comments) 
        {
            let response = await fetch('/addComment/'+demand+'/'+user+'/'+comments);
            
            if (response.status === 200) {
                let data = await response.text();
                console.log('Successfully commented');
            }
        }
    </script>
";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    public function getTemplateName()
    {
        return "demand/demand.html.twig";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  294 => 108,  287 => 106,  259 => 80,  257 => 79,  253 => 77,  242 => 75,  238 => 74,  234 => 73,  224 => 65,  213 => 61,  205 => 59,  195 => 57,  193 => 56,  189 => 55,  185 => 53,  181 => 52,  176 => 50,  165 => 46,  161 => 45,  155 => 44,  150 => 43,  148 => 42,  128 => 24,  124 => 22,  121 => 21,  111 => 20,  92 => 18,  70 => 2,  60 => 1,  37 => 16,);
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

{% block title %}Demande{% endblock %}

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
        button
        {
            width: fit-content;
        }
    </style>
    {% include 'header.html.twig' %}
    <h1>{{ demand.title }}</h1>
    <span class=\"badge rounded-pill bg-primary category\">{{ demand.category.name }} - {{ demand.subject }}</span>
    <span><b>{{ answers|length }} réponse(s) -</b></span>
    <span class=\"right\">Écrit par {{ demand.user.firstName }} {{ demand.user.lastName }}  le {{ demand.publishDate|date('d-m-Y') }}</span>
    <hr>
    <div class=\"flex-row\">
        <div class=\"flex-column col-6\" id=\"answerFeed\">
            {{ demand.comments }}
            <hr>
            {% for a in answers %}
                <p>
                    <!-- Modifier pour vérifier le rôle de l'utilisateur -->
                    {{ a.comments }} - 
                    {% if true %}
                        <a href=\"/profile/{{ a.user.id }}\">{{ a.user.firstName }} {{ a.user.lastName }}</a>
                    {% else %}
                        {{ a.user.firstName }} {{ a.user.lastName }}
                    {% endif %}
                    <span class=\"form-text\">{{ a.answerDate|date('Y-m-d') }}</span>
                </p>
                <hr>
            {% endfor %}
            <textarea id=\"commentArea\" class=\"form-control\" hidden></textarea>
            <div id=\"commentDiv\" class=\"flex-row\" hidden>
                <button id=\"cancelButton\" type=\"button\" class=\"btn btn-link\">Annuler</button>
                <button id=\"sendButton\" type=\"button\" class=\"btn btn-link\">Envoyer</button>
            </div>
            <button id=\"commentButton\" type=\"button\" class=\"btn btn-link\">Ajouter un commentaire</button>
        </div>
        <fieldset class=\"col-4 right\">
            <legend>Autres demandes en {{ demand.category.name }}</legend>
            {% for suggestion in sameSubject|filter(suggestion => suggestion.id != demand.id) %}
                <a href=\"/demand/{{ suggestion.id }}\">{{ suggestion.title }}</a>
            {% endfor %}
        </fieldset>
    </div>
    {% include 'footer.html.twig' %}
    <script>
        let commentArea = document.getElementById('commentArea');
        let commentDiv = document.getElementById('commentDiv');
        let cancelButton = document.getElementById('cancelButton');
        let sendButton = document.getElementById('sendButton');
        let commentButton = document.getElementById('commentButton');

        cancelButton.addEventListener('click', function()
        {
            commentDiv.setAttribute('hidden', '');
            commentArea.value = '';
            commentButton.removeAttribute('hidden');
            commentArea.setAttribute('hidden', '');
        });

        commentButton.addEventListener('click', function()
        {
            commentButton.setAttribute('hidden', '');
            commentArea.removeAttribute('hidden');
            commentDiv.removeAttribute('hidden');
        });

        sendButton.addEventListener('click', function()
        {
            if (commentArea.value != '') 
            {
                addComment({{ demand.id }}, {{ app.user.id }}, commentArea.value);

                window.location.href = '/demand/' + {{ demand.id }};
            }
        });

        /***** Requêtes AJAX *****/
        async function addComment(demand, user, comments) 
        {
            let response = await fetch('/addComment/'+demand+'/'+user+'/'+comments);
            
            if (response.status === 200) {
                let data = await response.text();
                console.log('Successfully commented');
            }
        }
    </script>
{% endblock %}", "demand/demand.html.twig", "C:\\xampp\\htdocs\\projetWebTuteur\\templates\\demand\\demand.html.twig");
    }
}
